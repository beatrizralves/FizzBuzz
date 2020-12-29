#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	int m3=0;
	int m5=0;
	
	for(a=1;a<=100;a++){		
	m3=a%3;
	m5=a%5;
	
		if (m3==0 && m5!=0){
		printf("FIZZ\n");
		}
		if (m5==0 && m3!=0){
			printf("BUZZ\n");
		}
		if (m5==0 && m3==0){ 
			printf("FIZZBUZZ\n");
		}
		if(m3!=0 && m5!=0){
			printf("%d\n",a);
		}
	}		
return 0;
}	




