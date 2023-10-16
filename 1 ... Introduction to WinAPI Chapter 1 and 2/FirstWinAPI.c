/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
HelloMsg.c −− Displays "Hello, Windows 98!" in a message box
(c) Charles Petzold, 1998
−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    MessageBox(NULL, TEXT("Hello, Windows 11!"), TEXT("MyFirstGUI"), 0);
    return 0;
}

/*
* 
* #include <windows.h>: This statement includes the header file windows.h, which contains definitions for the Win32 API functions.

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow): This is the program entry point. It is a function called WinMain() that takes four arguments:

hInstance: A handle to the current instance of the program.

hPrevInstance: A handle to the previous instance of the program, if there was one.

szCmdLine: A pointer to the command line string that was passed to the program when it was started.

iCmdShow: A flag that specifies how the program window should be displayed.

MessageBox (NULL, TEXT ("Hello, Windows 98!"), TEXT ("HelloMsg"), 0) ;: This function call displays a message box with the text "Hello, Windows 98!". The first argument to the MessageBox() function is the parent window handle, which is NULL in this case. 

The second argument is the text to be displayed in the message box. The third argument is the caption of the message box. The fourth argument is a set of flags that specify the options for the message box.

return 0 ;: This statement tells the compiler to return control to the operating system when the program is finished.


===========================================

HEADER FILES

The header files you mentioned are all important for writing Windows programs in C. They define all the Windows data types, function calls, data structures, and constant identifiers.

WINDEF.H: Basic type definitions.
WINNT.H: Type definitions for Unicode support.
WINBASE.H: Kernel functions.
WINUSER.H: User interface functions.
WINGDI.H: Graphics device interface functions.

You can search through these header files using the Find In Files option from the Edit menu in Visual Studio 2022 Community. 

You can also open the header files in the Developer Studio and examine them directly.

===================================

PROGRAM ENTRY POINT:

The program entry point for a Windows program is the WinMain() function. It is declared in the WINBASE.H header file.

*/




































