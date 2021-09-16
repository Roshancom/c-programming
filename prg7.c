/*wap to find sum of number from 1 to 50 using while loop.
while loop function is same as for loop but structure is different.
*/
#include<stdio.h>
void main(){
	int i=1;
	int sum=0;
	while(i<=50){
		
		sum += i;
		i++;
	}
	printf("%d",sum);
}

