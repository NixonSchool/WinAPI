#include <windows.h>

// Define menu item IDs
#define IDM_FILE_NEW       101
#define IDM_FILE_OPEN      102
#define IDM_FILE_SAVE      103
#define IDM_FILE_SAVE_AS   104
#define IDM_APP_EXIT       105
#define IDM_EDIT_UNDO      201
#define IDM_EDIT_CUT       202
#define IDM_EDIT_COPY      203
#define IDM_EDIT_PASTE     204
#define IDM_EDIT_CLEAR     205
#define IDM_BKGND_WHITE    301
#define IDM_BKGND_LTGRAY   302
#define IDM_BKGND_GRAY     303
#define IDM_BKGND_DKGRAY   304
#define IDM_BKGND_BLACK    305
#define IDM_TIMER_START    401
#define IDM_TIMER_STOP     402
#define IDM_HELP_HELP      501
#define IDM_APP_ABOUT      502

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
    // Window class registration
    WNDCLASS wndclass;
    wndclass.style         = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc   = WndProc;
    wndclass.cbClsExtra    = 0;
    wndclass.cbWndExtra    = 0;
    wndclass.hInstance     = hInstance;
    wndclass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.lpszMenuName  = NULL;
    wndclass.lpszClassName = TEXT("MenuDemoClass");
    wndclass.hIconSm       = LoadIcon(NULL, IDI_SMALLICON); //might bring some issue

    if (!RegisterClass(&wndclass)) {
        MessageBox(NULL, TEXT("Window Registration Failed!"), TEXT("Error!"), MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Create the window
    HWND hwnd = CreateWindow(TEXT("MenuDemoClass"), TEXT("Menu Demo"), WS_OVERLAPPEDWINDOW,
                              CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, hInstance, NULL);

    if (!hwnd) {
        MessageBox(NULL, TEXT("Window Creation Failed!"), TEXT("Error!"), MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Create the menu
    HMENU hMenu = CreateMenu();
    HMENU hMenuPopup;

    // File menu
    hMenuPopup = CreateMenu();
    AppendMenu(hMenuPopup, MF_STRING, IDM_FILE_NEW, "&New");
    AppendMenu(hMenuPopup, MF_STRING, IDM_FILE_OPEN, "&Open...");
    AppendMenu(hMenuPopup, MF_STRING, IDM_FILE_SAVE, "&Save");
    AppendMenu(hMenuPopup, MF_STRING, IDM_FILE_SAVE_AS, "Save &As...");
    AppendMenu(hMenuPopup, MF_SEPARATOR, 0, NULL);
    AppendMenu(hMenuPopup, MF_STRING, IDM_APP_EXIT, "E&xit");
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hMenuPopup, "&File");

    // Edit menu
    hMenuPopup = CreateMenu();
    AppendMenu(hMenuPopup, MF_STRING, IDM_EDIT_UNDO, "&Undo");
    AppendMenu(hMenuPopup, MF_SEPARATOR, 0, NULL);
    AppendMenu(hMenuPopup, MF_STRING, IDM_EDIT_CUT, "Cu&t");
    AppendMenu(hMenuPopup, MF_STRING, IDM_EDIT_COPY, "&Copy");
    AppendMenu(hMenuPopup, MF_STRING, IDM_EDIT_PASTE, "&Paste");
    AppendMenu(hMenuPopup, MF_STRING, IDM_EDIT_CLEAR, "De&lete");
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hMenuPopup, "&Edit");

    // Background menu
    hMenuPopup = CreateMenu();
    AppendMenu(hMenuPopup, MF_STRING | MF_CHECKED, IDM_BKGND_WHITE, "&White");
    AppendMenu(hMenuPopup, MF_STRING, IDM_BKGND_LTGRAY, "&Light Gray");
    AppendMenu(hMenuPopup, MF_STRING, IDM_BKGND_GRAY, "&Gray");
    AppendMenu(hMenuPopup, MF_STRING, IDM_BKGND_DKGRAY, "&Dark Gray");
    AppendMenu(hMenuPopup, MF_STRING, IDM_BKGND_BLACK, "&Black");
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hMenuPopup, "&Background");

    // Timer menu
    hMenuPopup = CreateMenu();
    AppendMenu(hMenuPopup, MF_STRING, IDM_TIMER_START, "&Start");
    AppendMenu(hMenuPopup, MF_STRING | MF_GRAYED, IDM_TIMER_STOP, "S&top");
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hMenuPopup, "&Timer");

    // Help menu
    hMenuPopup = CreateMenu();
    AppendMenu(hMenuPopup, MF_STRING, IDM_HELP_HELP, "&Help");
    AppendMenu(hMenuPopup, MF_STRING, IDM_APP_ABOUT, "&About MenuDemo...");
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hMenuPopup, "&Help");

    // Set the menu for the window
    SetMenu(hwnd, hMenu);

    // Display the window
    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // Message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, message, wParam, lParam);
    }
}



//This is the modification code you should add if yours is not running:

WNDCLASS wc;
wc.cbSize        = sizeof(WNDCLASS);
wc.style         = CS_HREDRAW | CS_VREDRAW;
wc.lpfnWndProc   = WndProc;
wc.cbClsExtra    = 0;
wc.cbWndExtra    = 0;
wc.hInstance     = GetModuleHandle(NULL);
wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
wc.lpszMenuName  = TEXT("MyAppMenu");
wc.lpszClassName = TEXT("MyAppClass");

// If you are using Unicode, you might need to set the appropriate window class explicitly
#ifdef UNICODE
wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
#endif

// Register the window class
if (!RegisterClass(&wc)) {
    MessageBox(NULL, TEXT("Window Registration Failed!"), TEXT("Error!"), MB_ICONEXCLAMATION | MB_OK);
    return 1;
}
