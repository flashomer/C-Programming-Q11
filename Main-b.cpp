#include<stdio.h>

void piramitrequest(int index){
	
	int yer= 20-index;
	char cumle[50]= "THE EXAM IS VERY EASY";
	
	if(yer == 10){
		printf("S");
	}
	else{
		(cumle[index+1])= '\0';
		printf("%s\n",cumle+yer);
		//printf("%s",cumle+index);
		piramitrequest(index-1);
		
	}
}
	
int main(){
	
		
	piramitrequest(20);
	
	return 0;	
}
	
	
