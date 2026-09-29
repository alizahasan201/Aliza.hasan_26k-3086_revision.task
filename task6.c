#include <stdio.h>
int main()
{
    int odays, btype, prio;
    float fine;

    printf("Enter overdue days: ");
    scanf("%d", & odays);
    printf("Enter book type: "); //(1=Regular,2=Reference,3=Rare)
    scanf("%d", &btype);
    printf("Enter priority membership (1/0): ");
    scanf("%d", &prio);

    if (btype == 1)
    {
        if (odays <= 7)
        {
            fine = odays * 5;
        }
        else
        {
            fine = 7 * 5 + (odays - 7) * 10;
        }

        if (prio == 1)
        {
            fine = fine - (fine * 0.20);
        }
    }
    else
    {
        if (btype == 2)
        {
            fine = odays * 15;

            if (prio == 1)
            {
                fine = fine - (fine * 0.20);
            }
        }
        else
        {
            fine = odays * 30;

            if (odays > 10)
            {
                printf("You are banned from Borrowing\n");
            }
        }
    }

    printf("Your fine is: Rs %.2f", fine);

    return 0;
}
