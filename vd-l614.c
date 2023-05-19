#include<stdio.h>

main()
{
    int a=1,b;
    printf("Enter Value = ");
    scanf("%d",&b);
    
    while(a<=b)
    {
        printf("%d\n",b);
        b--;
    }
    return 0;
}
