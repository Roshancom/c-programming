//wap to determine whether a given number is palindrome or not.
#include<stdio.h>
void main(){
	int n,rev=0,dig,tem;
	printf("enter number:");
	scanf("%d",&n);
	tem=n;
	while(n>0){
		dig= n%10;
		rev= rev*10 +dig;
		n=n/10;
	}
	if(tem==rev){
	
	printf("the given no %d is palindrome",rev);
}
	else{
	
	printf("the given no %d is not palindrome",rev);}
}
