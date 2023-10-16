#include <stdio.h>
#include <windows.h> // Include the Windows API header

int addition(int a, int b);

int main()
{
    
    printf("Performing addition...\n");
    Sleep(2000); // Sleep for 2000 milliseconds (2 seconds)
    int result  = addition(2, 3);
    printf("Your summation:%d\n", result);
    return 0;
}

int addition(int a, int b)
{
    printf("Enter the first number: ");
    scanf_s("%d", &b);
    printf("Enter second number: \n");
    scanf_s("%d", &a);
    return a + b;
}
