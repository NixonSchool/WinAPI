#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <windows.h>

int main()
{

    wprintf(L"Hello, world!");
    //Define a wide character variable
    wchar_t c = L'A';
    //Define a pionter to a wide character string.
    wchar_t *p;
    //Initialize a pointer ot a wide character string
    p = L"Hello!";
    //Define an array of wide characters
    wchar_t a[10];
    //Initialize an array of wide characters
    wchar_t b[] = L"Hello!";
    MessageBox(NULL, TEXT("Hello, world!"), TEXT("HelloMsg"), MB_OK);
    return 0;
}


















































