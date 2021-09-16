/*wap to generated following pattern
N
NE
NEP
NEPA
NEPAL
 */
 #include<stdio.h>
 void main(){
 	char name[10]="NEPAL";
 	int i,j;
 	for(i=0;i<=4;i++){
 		for(j=0;j<=i;j++){
 			printf("%c",name[j]);
		 }
		 printf("\n");
	 }
 	
 }
 
