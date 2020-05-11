#include <stdio.h>

int main()
{   int num=0,sum=0;


    do{
       printf("Enter a number:- ");
        scanf("%d",&num);
        sum=num+sum;

    }
    while(num!=0);
    {
        printf("Sum of all numbers is %2d",sum);

    }
    return 0;
}
