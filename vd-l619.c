#include<stdio.h>

main()
{
    int a=1,n,sum=1;
    printf("Enetr Value N = ");
    scanf("%d",&n);
    
    while(a<=n)
    {
    	printf("%d\n",a);
    	sum=sum*a;
    	a++;
	}
	printf("%d",sum);
}
