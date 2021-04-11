#include<stdio.h>
int main()
{
	int a,b;
    printf("Enter Two numbers : \n");
    scanf("%d %d", &a, &b);
	printf("Number before swapping is %d  and %d  \n",a ,b);
	a= a+b;
	b= a-b;
	a= a-b;
	printf("Number after swapping is %d , %d \n",a ,b);
	   return 0;
}
