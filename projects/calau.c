#include <stdio.h>
int main()
{
    float n1,n2;
    int n;
    printf("press 1 for addition [+]\n");
    printf("press 2 for subtraction [-]\n");
    printf("press 3 for multiplication [*]\n");
    printf("press 4 for division [/]\n");

    gt:
        {
    printf("\nenter your choice:");
    scanf("%d",&n);
    printf("enter two numbers:\n");
    scanf("%f%f",&n1,&n2);

    switch(n)
    {
    case 1:
        printf("addition of two numbers is :%.2f\n",n1+n2);
        break;

    case 2:
        printf("subtraction of two numbers is :%.2f\n",n1-n2);
        break;
    case 3:
        printf("multiplication of two numbers is :%.2f\n",n1*n2);
        break;
    case 4:
          if(n2==0)
            printf(" division is :infinity\n");
            else
        printf("division of two numbers is :%.2f\n",n1/n2);

        break;

    default :
    printf("invalid choice.");
       }
       printf("=================================================\n\n\n");

        }
        goto gt;
    return 0;
    getch();
}
