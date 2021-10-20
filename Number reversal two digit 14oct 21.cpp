//reversal of a number
#include<stdio.h>
main()
{
	int number, left ,a,rev;
	printf("Enter a two digit number=\n");
	scanf("%d",&number);
	//while(number>0);
	a=number/10;
	rev=((number%10)*10)+a;
    printf("\n%d",rev);
	return 0;
}
