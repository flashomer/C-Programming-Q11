#include<stdio.h>

void piramitrequest(int index){
	
	int yer= 9-index;
	char cumle[10]= "THE EXAM\n";
	
	if(yer == 7){
		printf("M");
	}
	else{
		printf("%s",cumle+yer);
		piramitrequest(index-1);
		
	}
}
	
int main(){
		
	piramitrequest(9);
	
	return 0;	
}
	
	

