#include <stdio.h>
#include <math.h>

int main() {
    int i, num, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not prime\n", num);
    }
    else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                flag = 0;
                printf("%d is not prime\n", num);
                break;
            }
        }

        if (flag == 1) {
            printf("%d is prime\n", num);
        }
    }

    return 0;
}


/*

main(): This is the main function where the program execution starts.
int i, num, flag = 1;: Declares three integer variables i, num, and flag. i is used as a loop counter, num stores the input number, and flag is used to keep track of whether the number is prime or not. It's initialized to 1, assuming the number is prime.
printf("Enter a number: ");: Displays a prompt to the user to enter a number.
scanf("%d", &num);: Reads an integer from the user's input and stores it in the num variable.

if (num <= 1) {: Checks if the input number is less than or equal to 1.
Numbers less than or equal to 1 are not considered prime.

for (i = 2; i <= sqrt(num); i++) {:
This is a for loop that initializes i to 2 and iterates
while i is less than or equal to the square root of num.
It's an optimization to check for factors only up to the square root
of the number, as factors larger than the square root would have
corresponding factors smaller than the square root.

if (num % i == 0) {: Checks if num is divisible by i.
If the remainder of the division is 0, it means that num is not
prime because it has a factor other than 1 and itself.
flag = 0;: Sets flag to 0 to indicate that the number is not prime.
printf("%d is not prime\n", num);: Prints a message indicating that the
number is not prime.
break;: Exits the loop since the number is not prime; there's no need
to continue checking.

if (flag == 1) {: Checks if flag is still 1 after the loop. If flag is 1,
it means that no factors other than 1 and itself were found during the loop.
printf("%d is prime\n", num);: Prints a message indicating that the number is prime.
Finally, the program ends with the closing curly brace and a return 0; statement,
indicating successful execution.

sqrt() is a library function that returns the square root of a number, and it is included from the math.h header.
The for loop iterates from 2 to the square root of the input number. This is an optimization because factors larger than the square root would have corresponding factors smaller than the square root.
If the input number is divisible by any number within this range, it's not prime, and there's no need to check further. The break statement is used to exit the loop in this case.
Control can exit the loop in two ways:
If it exits after the full execution of the loop (i.e., loop condition becomes false without encountering a break), then the value of flag remains 1, and the number is considered prime.
If it exits due to encountering a break, the value of flag is set to 0, indicating that the number is not prime.

*/
