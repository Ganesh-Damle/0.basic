
//Program 7:Write a program, take a number and print whether it is less than 10 or greater
//than 10. Take all the values from the user

#include <stdio.h>
void main(){
	int var;
	printf("Enter var number: \n");
	scanf("%d",&var);

	if (var>10){
		printf("%d is greater than 10\n",var);
	}
	else {
		printf("%d is less than 10\n",var);
	}
}

