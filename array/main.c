#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i , n ,sum = 0;

    printf("Inter the Numbers : \n");

    for(i = 0; i < 10; i++)
    {
        printf("Number is :\n", n);

        scanf("%d", &n);

        sum += n;
    }

    printf("%d\n", sum);
    return 0;*/

    int i,sum = 0, numbers[10];
    printf("Inter the Numbers : \n");

    for (i=0; i<10; i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=numbers[i];  //sum = sum+numbers[i];
    }
    printf("The sum is : \n");

    printf("%d\n", sum);

    return 0;
}
