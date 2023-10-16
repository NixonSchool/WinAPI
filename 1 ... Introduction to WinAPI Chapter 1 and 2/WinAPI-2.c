#include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    MessageBox (NULL, TEXT ("Hello Windows98!"), TEXT ("MyFirstGUI"), MB_ICONASTERISK) ;
    return 0 ;
}
