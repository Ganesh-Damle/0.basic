//Program 6:Write a program to check if a number is even or odd. Take all the values
//from the user

#include<stdio.h>
void main(){
	int var;
	printf("Enter var no :\n");
	scanf("%d",&var);

	if (var%2==0){
		printf("%d ia an even number\n",var);
	}
	else{
		printf("%d ia an odd number\n",var);
	}
}
