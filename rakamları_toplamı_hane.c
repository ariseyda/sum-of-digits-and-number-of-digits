#include<stdio.h>

//An integer value is taken from the user, and the sum of the digits of this number and the number of digits are calculated.

int main(){
	
	int n,digit=0,sum=0;
	
	printf("Enter an integer:");
	scanf("%d",&n);
	
	while(n>0){
		
		sum+=n%10;
		
		n=n/10;
		
		digit++;
		
	}
	printf("Sum of the digits of the number:%d\n",sum);
	printf("Number of digits:%d",digit);
	
	
	
}

