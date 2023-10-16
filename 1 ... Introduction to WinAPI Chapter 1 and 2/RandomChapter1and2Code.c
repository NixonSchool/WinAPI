#include <windows.h>

int main()
{
  char szBuffer[100];

  sprintf(szBuffer, "This is a message box.");

  MessageBox(NULL, szBuffer, "My Program", MB_OK);

  return 0;
}

#define AGE 12
#define PERCENTAGE 100
#define TEETH 32
#define PI 3.1459


#include <wctype.h>
#include <wchar.h>

int main() {
  wchar_t szBuffer[100];
  wchar_t szFormat[] = L"Hello, %ls!";

  swprintf(szBuffer, szFormat, L"world!");

  wprintf(L"%s\n", szBuffer);

  return 0;
}



//Output: Hello, world!


=============================================

#include <windows.h>
#include <tchar.h>
#include <stdio.h>

int CDECL MessageBoxPrintf(TCHAR *szCaption, TCHAR *szFormat, ...)
{
  TCHAR szBuffer[1024];
  va_list pArgList;

  // The va_start macro (defined in STDARG.H) is usually equivalent to:
  // pArgList = (char *) &szFormat + sizeof (szFormat) ;
  va_start(pArgList, szFormat);

  // The last argument to wvsprintf points to the arguments
  _vsntprintf(szBuffer, sizeof(szBuffer) / sizeof(TCHAR), szFormat, pArgList);

  // The va_end macro just zeroes out pArgList for no good reason
  va_end(pArgList);

  return MessageBox(NULL, szBuffer, szCaption, 0);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  int cxScreen, cyScreen;
  cxScreen = GetSystemMetrics(SM_CXSCREEN);
  cyScreen = GetSystemMetrics(SM_CYSCREEN);
  MessageBoxPrintf(TEXT("ScrnSize"), TEXT("The screen is %i pixels wide by %i pixels high."), cxScreen, cyScreen);
  return 0;
}











































