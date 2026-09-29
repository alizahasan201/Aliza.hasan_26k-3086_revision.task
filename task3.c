#include <stdio.h>
int main() {
    int marks;
    printf("Enter your Marks out of 100: ");
    scanf("%d", & marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid Marks");
    }
    else if (marks>=90 && marks<=100)
    {
        printf("Grade A+\n");
        printf("Result: PASS");
    }
    else if (marks>=80 && marks<=89)
    {
        printf("Grade A\n");
        printf("Result: PASS");
    }
    else if (marks>=70 && marks<=79)
    {
        printf("Grade B\n");
        printf("Result: PASS");
    }
    else if (marks>=60 && marks<=69)
    {
        printf("Grade C\n");
        printf("Result: PASS");
    }
    else if (marks>=50 && marks<=59)
    {
        printf("Grade D\n");
        printf("Result: PASS");
    }
    else if (marks<50)
    {
        printf("Result: FAIL");
    }
    return 0;
}
