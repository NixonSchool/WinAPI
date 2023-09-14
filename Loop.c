#include <stdio.h>
#include <windows.h>
#include <time.h>


void multiply_no_operator() {
    int num1, num2, num3 = 0;
    int j;

    printf("Enter the first number: ");
    scanf_s("%d", &num1);
    printf("Enter the second number: ");
    scanf_s("%d", &num2);

    if (num2 < 0) {
        num1 = -num1;
        num2 = -num2;
    }

    for (j = 0; j < num2; j++) {
        num3 = num3 + num1;
        printf("Num1 is currently: %d\n", num1);
    }

    printf("The result of multiplication is: %d\n", num3);
}


//Here each number is the sum of the previous two
void previous_sum()
{
    long x, y, z;
    int i, n;
    x = 0;
    y = 1;
    printf("Enter the number of terms: ");
    scanf_s("%ld", &n);
    printf("&ld", y);
    for (i = 1; i < n; i++)
    {
        z = x + y;
        printf("%ld", z);
        x = y; 
        y = z;
    }
    printf("\n");
}

int main()
{
	//we use for loops when the number of iterations is known beforehand. eg printing 1 to 100
	int i;
	int num = 0;

	for (i = 0; i < 100; i++)
	{
		num += 1;
		printf("The current number is: %d\n", num);
		
	}
    printf("\n");
	multiply_no_operator();
    printf("\n");
    previous_sum();


	return 0;
}



/*

The explanation you provided describes how a for loop works in programming. It defines the three expressions used in a for loop:

expression1: Initialization expression.
expression2: Test expression or condition.
expression3: Update expression.
Here's how the for loop operates:

expression1 is executed once at the beginning of the loop and initializes 
loop variables.
expression2 is the condition that is checked before each iteration of the loop.
If it's true, the loop body is executed.
After executing the loop body, control transfers to expression3,
which updates loop variables.
The condition (expression2) is checked again, 
and if it's still true, the loop body is executed again. This process continues until the condition becomes false.
When the condition becomes false, the loop terminates, and control moves to the statement following the loop.

*/
