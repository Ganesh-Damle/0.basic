
//Program 3: WAP to find max among 2 numbers. Take all the values from the
//use



#include <stdio.h>

void main(){
	int num1,num2;
	printf("Enter num1 value:\n");
	scanf("%d",&num1);

	printf("Enter num2 value:\n");
	scanf("%d",&num2);

	if (num1<num2){
		printf("\n%d\n",num2);
	}
	else if(num1>num2){
		printf("%d\n",num1);
	}
 	else{
		printf("equal\n");
	}

}


