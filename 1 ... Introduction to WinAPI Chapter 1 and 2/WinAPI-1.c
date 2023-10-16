/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
HelloMsg.c −− Displays "Hello, Windows 98!" in a message box
(c) Charles Petzold, 1998
−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    MessageBox (NULL, TEXT ("Hello Windows98!"), TEXT ("MyFirstGUI"), 0) ;
    return 0 ;
}


int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd
);

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd
) {
    MessageBox(NULL, TEXT("Hello, Windows!"), TEXT("HelloMsg"), 0);
    return 0;
}


#include <windows.h>

int main()
{
    MessageBox(NULL, TEXT("Hello, world!"), TEXT("HelloMsg"), MB_OK);
    return 0;
}

#define MB_OK 0x00000000L
#define MB_OKCANCEL 0x00000001L
#define MB_ABORTRETRYIGNORE 0x00000002L
#define MB_YESNOCANCEL 0x00000003L
#define MB_YESNO 0x00000004L
#define MB_RETRYCANCEL 0x00000005L

#define MB_DEFBUTTON1 0x00000000L
#define MB_DEFBUTTON2 0x00000100L
#define MB_DEFBUTTON3 0x00000200L
#define MB_DEFBUTTON4 0x00000300L

//Additionally, you can specify icons to be displayed alongside the message using options like MB_ICONHAND, MB_ICONQUESTION, MB_ICONEXCLAMATION, and MB_ICONASTERISK.

#define MB_ICONHAND 0x00000010L
#define MB_ICONQUESTION 0x00000020L
#define MB_ICONEXCLAMATION 0x00000030L
#define MB_ICONASTERISK 0x00000040L




