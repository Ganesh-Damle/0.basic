
//Program 9: Write a program, take a number and print whether it is positive or
//negative. Take all the values from the user


#include <stdio.h>
void main(){
	int var;
	printf("Enter number:\n");
	scanf("%d",&var);

	if( var>0){
		printf("%d is a positive number\n",var);
	}
	else if (var<0){
		printf("%d ia negative number\n",var);
	}
	else{
		printf("%d you entered zero\n",var);
	}

}

