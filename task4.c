#include <stdio.h>
int main() {

    int cap, curlev, bmin;
    float frate, rem, time, ecost;

    printf("Enter the Tank Capacity (in litres): ");
    scanf("%d", & cap);
    printf("Enter the Current water level(in litres): ");
    scanf("%d", & curlev);
    printf("Enter the Fill Rate (in L/M): ");
    scanf("%f", & frate);

    if(curlev>=cap)
    {
        printf("Water Tank Already Filled");
        return 0;
    }

    rem = cap - curlev;
    time = rem/frate;

    bmin = (int)time;
    if(time>bmin)
    {
        bmin = bmin+1;
    }
    float elec = 3.50;

    ecost = bmin*elec;

    printf("The Required Time is: %.2f\n", time);
    printf("The Electricity Cost is: %.2f", ecost);
    return 0;
}
