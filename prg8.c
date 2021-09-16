/*wap a program to reverse a given number*/
#include<stdio.h>
void main(){
	int n,reverse=0,rem;
	printf("enter number to reverse:");
	scanf("%d",&n);
	while(n>0){
		rem =n%10;
		reverse = reverse * 10 +rem;
		n=n/10;
	}
	printf("the reverse of %d is :%d",n,reverse);
	
}
