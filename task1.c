#include <stdio.h>

int main()
{
    float distance, fare;
    int hour;

    printf("Enter distance in kilometers: ");
    scanf("%f", &distance);

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (distance <= 0)
    {
        printf("Invalid Distance");
        return 0;
    }

    if (distance <= 1)
    {
        fare = 50;
    }
    else
    {
        fare = 50 + (distance - 1) * 22;
    }

    if (hour < 6 || hour > 22)
    {
        fare = fare + 40;
    }
    
    printf("Total Fare = Rs %.2f", fare);

    return 0;
}
