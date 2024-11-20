#include<stdio.h>
main(){
	int n,i,j,k;
    n=10;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
		
		printf("%d ",j);
	}
		for(k=n-i;k>i;k--){
		
		printf(" ");
	}
		for(j=i;j>=1;j--){
		
		printf("%d ",j);
		}
		printf("\n");
	}
}

