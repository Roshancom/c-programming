//wap to find the sum of number from 1 to 50 which are divided by 4 and 5.
#include<stdio.h>
void main(){
	int i;
	int sum=0;
	for(i=1;i<=50;i++) {
		//using logic "and" for both divisible number.
	if(i%4==0 && i%5==0){
	
		sum +=i;
	}
	
	}
	printf("%d",sum);
}
