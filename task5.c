#include <stdio.h>
int main() {
             float mbl, bonus, fload;
             int ncode, wstat;
    
    printf("Enter your mobile load amount: ");
    scanf("%f", & mbl);
    printf("Enter your Network Code: "); 
    //(1 = jazz, 2 = telenor, 3 = ufone)
    scanf("%d", & ncode);
    printf("Enter your Weekend Status: "); //(1=weekend, 2=weekday)
    scanf("%d", & wstat);

    if(mbl<100)
    {
        bonus = 0;
    }
    if (mbl>100 && mbl < 499)
    {
        if (wstat == 1)
        {
            if(ncode==3)
            {
                bonus = mbl*0.05;
            }
            else 
            {
                bonus = mbl*0.10;
            }
        }
        else 
        {
            bonus = mbl*0.05;
        }
        
    }

    if (mbl>=500)
    {
        if (ncode==1)
        {
            bonus = mbl * 0.20;
        }
        else 
        {
            if(wstat==1)
            {
                bonus = mbl*0.20;
            }
            else 
            {
                bonus = mbl*0.12;
            }
        }
    }

    fload = mbl+bonus;
    printf("Your Bonus is:%.2f\n", bonus);
    printf("Your Final Load Amount is: %.2f", fload);

    return 0;
}
