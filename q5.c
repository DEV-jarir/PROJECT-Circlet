#include<stdio.h>
main(){
	int i,j;
	
	for(i=1; i<=5; i++){
		if(i==1 || i==3){
			printf("* * * * *\n");
		}
		else if(i==4 || i==5){
			printf("*\n");
		}
		else{
			printf("*       *\n");
		}
	}
}
