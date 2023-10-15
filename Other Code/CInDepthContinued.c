#include <stdio.h>

int main() {
    int math, science, english, kiswahili, socialstudies, cre, results;

    char grade1 = 'A';
    char grade2 = 'B';
    char grade3 = 'C';
    char grade4 = 'D';
    char grade5 = 'E';

    printf("Enter your math marks: \n");
    scanf_s("%d", &math);
    printf("Enter your science marks: \n");
    scanf_s("%d", &science);
    printf("Enter your english marks: \n");
    scanf_s("%d", &english);
    printf("Enter your kiswahili marks: \n");
    scanf_s("%d", &kiswahili);
    printf("Enter your socialstudies marks(out of 60, not percentage): \n");
    scanf_s("%d", &socialstudies);
    printf("Enter your cre marks(out of 30, not percentage): \n");
    scanf_s("%d", &cre);

    //here's where the code might go wrong, if you work with integers instead of doubles
    int social_cre_total = cre + socialstudies;
    double social_cre_percent = ((double)social_cre_total / 90) * 100;
    results = math + science + english + kiswahili + social_cre_total;

    if (results > 500 || results < 0) {
        printf("Stop the cap! Re-enter your marks!\n");
    }
    else {
        printf("\n");
        printf("--------------------------------------------------\n");
        printf("Your official exam results: %d/500\n", results);
        printf("--------------------------------------------------\n");
    }

    printf("\n");
    printf("You are going to be assigned your subject grades shortly.\n");

    // Assigning grades to subjects.

    // Math
    printf("==============================================\n");

    if (math > 100) {
        printf("Grade in percentage can't be more than 100%. Re-enter math marks.");
    }
    else if (math >= 80 && math <= 100) {
        printf("You got an %c in math.", grade1);
    }
    else if (math >= 70 && math < 80) {
        printf("You got a %c in math.", grade2);
    }
    else if (math >= 60 && math < 70) {
        printf("You got a %c in math", grade3);
    }
    else if (math >= 50 && math < 60) {
        printf("You got a %c in math.", grade4);
    }
    else if (math < 50 && math >= 0) {
        printf("You got an %c in math.", grade5);
    }
    else {
        printf("You entered an invalid grade for math! Please retry.\n");
    }
    printf("\n");

    // Science
    if (science > 100) {
        printf("Grade in percentage can't be more than 100%. Re-enter science marks.");
    }
    else if (science >= 80 && science <= 100) {
        printf("You got grade: %c in science.", grade1);
    }
    else if (science >= 70 && science < 80) {
        printf("You got a %c in science.", grade2);
    }
    else if (science >= 60 && science < 70) {
        printf("You got a %c in science", grade3);
    }
    else if (science >= 50 && science < 60) {
        printf("You got a %c in science.", grade4);
    }
    else if (science < 50 && science > = 0) {
        printf("You got a %c in science.", grade5);
    }
    else {
        printf("You entered an invalid grade for science! Please retry.\n");
    }
    printf("\n");

    // Kiswahili
    if (kiswahili > 100) {
        printf("Grade in percentage can't be more than 100%. Re-enter kiswahili marks.");
    }
    else if (kiswahili >= 80 && kiswahili <= 100) {
        printf("You got grade: %c in kiswahili.", grade1);
    }
    else if (kiswahili >= 70 && kiswahili < 80) {
        printf("You got a %c in kiswahili.", grade2);
    }
    else if (kiswahili >= 60 && kiswahili < 70) {
        printf("You got a %c in kiswahili", grade3);
    }
    else if (kiswahili >= 50 && kiswahili < 60) {
        printf("You got a %c in kiswahili.", grade4);
    }
    else if (kiswahili < 50 && kiswahili >= 0) {
        printf("You got a %c in kiswahili.", grade5);
    }
    else {
        printf("You entered an invalid grade for Kiswahili! Please retry.\n");
    }
    printf("\n");

    // English
    if (english > 100) {
        printf("Grade in percentage can't be more than 100%. Re-enter english marks.");
    }
    else if (english >= 80 && english <= 100) {
        printf("You got grade: %c in english.", grade1);
    }
    else if (english >= 70 && english < 80) {
        printf("You got a %c in english.", grade2);
    }
    else if (english >= 60 && english < 70) {
        printf("You got a %c in english", grade3);
    }
    else if (english >= 50 && english < 60) {
        printf("You got a %c in english.", grade4);
    }
    else if (english < 50  && english >= 0) {
        printf("You got a %c in english.", grade5);
    }
    else {
        printf("You entered an invalid grade for english! Please retry.\n");
    }
    printf("\n");

    // Social Studies and CRE
    printf("Your social-cre percentage is: %.2lf\n", social_cre_percent);
    if (social_cre_percent > 100) {
        printf("Grade in percentage can't be more than 100%. Re-enter social-cre marks.");
    }
    else if (social_cre_percent >= 80 && social_cre_percent <= 100) {
        printf("You got grade: %c in social_cre_total.", grade1);
    }
    else if (social_cre_percent >= 70 && social_cre_percent < 80) {
        printf("You got a %c in social_cre_percent.", grade2);
    }
    else if (social_cre_percent >= 60 && social_cre_percent < 70) {
        printf("You got a %c in social_cre_percent", grade3);
    }
    else if (social_cre_percent >= 50 && social_cre_percent < 60) {
        printf("You got a %c in social_cre_percent.", grade4);
    }
    else if (social_cre_percent < 50 && social_cre_percent >= 0) {
        printf("You got a %c in social_cre_percent.", grade5);
    }
    else {
        printf("You entered an invalid grade for social_cre! Please retry.\n");
    }
    printf("\n");
    printf("==============================================\n");

    printf("Done!\n");

    return 0;
}

/* 

Using system("Pause"); is a common way to prevent a C program from closing 
immediately after it finishes executing. However, it's important to note 
that this approach is not very portable because it relies on the 
Windows-specific command "pause." If you want your program 
to be more platform-independent, you can use cross-platform methods 
to achieve the same result.

Here's an alternative way to make your C program wait for user 
input before closing:

#include <stdio.h>

int main() {
	// Your program's code goes here

	printf("Press Enter to exit...");
	getchar(); // Wait for the user to press Enter

	return 0;
}

In this example, getchar() is used to wait for the user to press 
Enter before the program exits. 
This approach is more portable and works on different operating systems.

However, if you are specifically targeting Windows and
prefer using system("Pause");, you can continue using it, 
but be aware of its platform dependency.


The reason why the code you provided is not running is because the sleep() function is not defined in the stdio.h header file. The sleep() function is a UNIX function that suspends the execution of the program for a specified period of time. It is not part of the C standard, so it is not defined in the stdio.h header file.

If you are using a UNIX operating system, you can include the unistd.h header file to get the definition of the sleep() function. For example:

#include <stdio.h>
#include <unistd.h>

int main() {
	// Your program's code goes here

	sleep(1); // Suspend the execution of the program for 1 second

	return 0;
}
If you are using a Windows operating system, you can use the Sleep() function from the Windows API.
Not using sleep() which is a Unix function.


*/