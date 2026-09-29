#include <stdio.h>
int main() {
            float bill, disc, fbill;
            int mem;

            printf("Enter your bill: ");
            scanf("%f", & bill);
            printf("Are you a memeber or not(1/0): ");
            scanf("%d", & mem);

            if(bill<500)
            {
                disc = 0;
            }

            else if(bill>=500 && bill <=1999)
            {
                if(mem==1)
                {
                    disc = bill * 0.10;
                }
                else 
                {
                    disc = bill * 0.05;
                }
            }
            else if (bill>=2000)
            {
                 if(mem==1)
                {
                    disc = bill * 0.15;
                }
                else 
                {
                    disc = bill * 0.08;
                }
            }
    fbill = bill - disc;
    printf("Discount amount: %.2f\n", disc);
    printf("The Final Bill is: %.2f", fbill);
    return 0; 
}
