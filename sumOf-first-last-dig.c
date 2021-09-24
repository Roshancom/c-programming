//program to find sum of first and last digit of a given number.
#include<stdio.h>
void main(){
	int n,sum,first,last;
	printf("enter a number(at least greater then 10) :");
	scanf("%d",&n);
	//find last digit number.
	last=n%10;
	//find first digit number.
	while(n>=10){
		n=n/10;
	}
	first=n;
	sum = first+last;
	printf("the sum of number is: %d",sum);
} 
