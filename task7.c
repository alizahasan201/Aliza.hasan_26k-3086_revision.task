#include <stdio.h>
int main() {
              int mat, ff;
              float bavg;
    
    printf("Enter the matches you've played: ");
    scanf("%d", & mat);
    printf("Enter your Batting Average: ");
    scanf("%f", & bavg);
    printf("Have you passed Fitness Status(1=N, 0=Y): ");
    scanf("%d", & ff);

    if(mat<5)
    {
        printf("Rejected-----INSUFFICIENT MATCHES");
        return 0;
    }

    if(bavg>=35 && mat>=10)
    {
        printf("Selected");
    }
   else
    {
         if(bavg>=25 && bavg <=34.99 && mat>=20)
            {
                if(ff==1)
                  {
                    printf("Rejected---FITNESS FALIURE");
                  }
                else 
                 {
                   printf("Selected-----EXPERIENCE QUOTA");
                 }
            } 
        else 
         {
             printf("Not Selected");
         }
    }      
    return 0;
}
