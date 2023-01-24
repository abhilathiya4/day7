#include<stdio.h>

main(){
	
	float s ;
	float H ;
	float D ;
	float T ;
	float G ;
	
	printf("enter basic salary : ");
	scanf("%f",&s);
	
	H = s*0.1;
	D = s*0.05;
	T = s*0.08;
	
	G = s + H + D + T;
	
	printf("gross salary :  %.2f",G);
	
	
}
