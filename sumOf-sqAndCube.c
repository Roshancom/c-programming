#include<stdio.h>
void main(){
int N;
printf("enter number for array :");
scanf("%d",&N);
int i,num[100],large,small;
printf("enter %d number:",N); 
for(i=0;i<N;i++){
	scanf("%d",&num[i]);
}
large = num[0];
small = num[0];
for(i=0;i<N;i++){

if(large<num[i])
large=num[i];

if(small>num[i])
small=num[i];
}
int sqL= large*large;
int cbS= small*small*small;
int sum = sqL+cbS;

printf("the sum of sq of large no. and cube of smallest no. present in array is :%d",sum);
}
