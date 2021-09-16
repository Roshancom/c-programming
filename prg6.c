/*wap to generate following pattern.
NEPAL
NEPA
NEP
NE
N
*/
#include<stdio.h>
void main(){
	int i,j;
	char name[10] = "NEPAL";
	for(i=4;i>=0;i--){
		for(j=0;j<=i;j++){
			printf("%c",name[j]);
		}
		printf("\n");
	}
}
