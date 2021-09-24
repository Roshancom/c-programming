//program to find sum of following series.
//1-1/3+1/6-1/10+......up to N.
#include<stdio.h>
int main(){
	float t,sum=0,n,a=1;
	int i;
	printf("enter the no. :");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		if((i%2)==0)
		t=(-1/a);
		else
		t=(1/a);
		sum +=t;
		a=1+a+i;
		
	}
	printf("the sum of series is:%f",sum);
	return 0;
}

