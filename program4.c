
//Program 4: WAP to find min among 2 numbers. Take all the values from the user


#include <stdio.h>

void main(){
	int num1,num2;
	printf("Enter num1 value:\n");
	scanf("%d",&num1);

	printf("Enter num2 value:\n");
	scanf("%d",&num2);

	if (num1<num2){
		printf("\n%d\n",num1);
	}
	else if(num1>num2){
		printf("%d\n",num2);
	}
 	else{
		printf("equal\n");
	}

}


