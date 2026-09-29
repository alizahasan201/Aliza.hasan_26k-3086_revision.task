#include <stdio.h>
int main()
{
int mtype, ctype;
float bill, serv, disc, fbill;

printf("Enter your Meal Category (1=Fast Food, 2=Desi Food, 3=Chinese): ");
scanf("%d", &mtype);

printf("Enter your Bill Amount: ");
scanf("%f", &bill);
printf("Enter Customer Type (1=Student, 2=Regular): ");
scanf("%d", &ctype);

if (mtype < 1 || mtype > 3 || ctype < 1 || ctype > 2)
{
    printf("Invalid Selection");
    return 0;
}

switch (mtype)
{
    case 1:
        serv = bill * 0.05;
        break;

    case 2:
        serv = bill * 0.08;
        break;

    case 3:
        serv = bill * 0.10;
        break;
}

if (bill >= 1000)
{
    if (ctype == 1)
    {
        disc = bill * 0.15;
    }
    else
    {
        disc = bill * 0.10;
    }
}
else
{
    if (ctype == 1)
    {
        disc = bill * 0.05;
    }
    else
    {
        disc = 0;
    }
}
    
fbill = bill + serv - disc;

printf("\nService Charge: Rs %.2f", serv);
printf("\nDiscount: Rs %.2f", disc);
printf("\nFinal Payable Amount: Rs %.2f", fbill);

return 0;
}
