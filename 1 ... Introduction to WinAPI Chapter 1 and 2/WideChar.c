#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char *pc = "Hello!";
    int iLength = strlen(pc);

    return 0;
}

wchar_t *pw = L"Hello!";


iLength = strlen(pw);



0x0048 0x0065 0x006C 0x006C 0x006F 0x0021


48 00 65 00 6C 00 6C 00 6F 00 21 00


size_t __cdecl strlen(const char *);
size_t __cdecl wcslen(const wchar_t *);



iLength = wcslen(pw);



#include <stdio.h>
#include <wchar.h>
#include <string.h>

int main() {
    // Regular character string
    char *pc = "Hello!";
    int length1 = strlen(pc);

    // Wide character string
    wchar_t *pw = L"Hello!";
    int length2 = wcslen(pw);

    // Display the lengths
    printf("Character string length: %d\n", length1);
    printf("Wide character string length: %d\n", length2);

    return 0;
}

==================================================

//tchar

#include <stdio.h>
#include <tchar.h>

int main() {
    // Define a TCHAR array to hold a string
    TCHAR str[] = _T("Hello, World!");

    // Use the _tprintf function to print the string
    _tprintf(_T("String: %s\n"), str);

    // Use generic function names like _tcslen to get the length of the string
    size_t length = _tcslen(str);
    _tprintf(_T("String Length: %d\n"), length);

    return 0;
}

=====================================================

#define __T(x) L##x


#include <tchar.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
    _tprintf(_T("Hello, %s!\n"), _T("World"));
    return 0;
}

======================================================

char *string = "Hello, world!";


wchar_t *string = L"Hello, world!";



TCHAR *string = TEXT("Hello, world!");


#include <windows.h>

int main() {
  TCHAR *string = TEXT("Hello, world!");

  // ...
}



#define UNICODE

#include <windows.h>

int main() {
  TCHAR *string = TEXT("Hello, world!");

  // ...
}


#include <windows.h>

int main() {
  TCHAR *string = TEXT("Hello, world!");

  // ...
}



cl /DUNICODE main.c


#def AGE 12


#include <windows.h>

int main() {
  TCHAR *string = TEXT("Hello, world!");

  // ...
}




#include <winnt.h>

int main() {
  TCHAR *string = TEXT("Hello, world!");

  // ...
}

============================================

#include <windows.h>

int main ()
{
    int result = MessageBox(NUll, "This is a messagebox.", "My Program", MB_OK);
    if(result == IDOK)
    {
        //User clicked ok...do something.
    }
    return 0;
}



#ifdef UNICODE
#define MessageBox MessageBoxW
#else
#define MessageBox MessageBoxA
#endif



#include <windows.h>

int main()
{
  char sourceString[] = "This is a source string.";
  char destinationString[100];

  lstrcpy(destinationString, sourceString);

  printf("The destination string is: %s\n", destinationString);

  return 0;
}

============================================

#include <windows.h>

int main()
{
  char szBuffer[100];

  sprintf(szBuffer, "The sum of %i and %i is %i", 5, 3, 5 + 3);

  MessageBox(NULL, szBuffer, "My Program", MB_OK);

  return 0;
}

============================================





#include <windows.h>
#include <stdarg.h>
#include <stdio.h>

/*
Second function should be on top of main, not below it.
Or you can initialize it like:

void formatString(char *buffer, const char *format, ..)
*/

void formattedString(char *buffer, const char *format, ..)
{
    va_list args;
    va_start(args, format);
    vsprintf(buffer, format, args);
    va_end(args);
}

int main()
{
    char output[100]; //buffer to store the formatted string
    int num = 42;
    float pi = 3.14159;
    char *text = "Hello, World!";
    formattedString(output, "Integer: %d, Float: %.2f, String: %s", num, pi, text);
    printf("Formatted string: %s\n", output);
}

=======================================

//If you don't know about variadic functions, this is going to be tough on you.
#include <stdio.h>
#include <stdarg.h>

void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }

    va_end(args);
}

int main() {
    printNumbers(4, 1, 2, 3, 4);
    return 0;
}

========================================


int main() {
  printNumbers(4, 1, 2, 3, 4);
  return 0;
}




void printNumbers(int count, ...) {
  va_list args;
  va_start(args, count);

  for (int i = 0; i < count; i++) {
    int num = va_arg(args, int);
    printf("%d ", num);
  }

  va_end(args);
}



--------------------------------------------

//The variadic function.

void printStrings(int count, ...) {
  va_list args;
  va_start(args, count);

  for (int i = 0; i < count; i++) {
    char* str = va_arg(args, char*);
    printf("%s ", str);
  }

  va_end(args);
}

//How to use it.

int main() {
  printStrings(2, "Hello", "world!");
  return 0;
}



======================================

#include <windows.h>

int main()
{
  char szBuffer[100];

  sprintf(szBuffer, "This is a message box.");

  MessageBox(NULL, szBuffer, "My Program", MB_OK);

  return 0;
}
















