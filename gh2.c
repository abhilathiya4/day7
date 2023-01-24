#include<stdio.h>

main(){
	
	int a;
	int b;
	
	printf("ENTER A:");
	scanf("%d",&a);
	
	printf("ENTER B:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("VALUE AFTER SWAPING A:   %d\n",a);
	printf("VALUE AFTER SWAPING B:   %d",b);
	
	
	
	
}
