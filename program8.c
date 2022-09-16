
//Program 8: Write a program, take a character and print whether it is in
//UPPERCASE or lowercase. Take all the values from the user

#include <stdio.h>
void main(){
	char var;
	printf("Enter character: \n");
	scanf("%c",&var);

	if(var>=65 && var<=90){
		printf("You entered UPPERCASE later\n");
	}
	else if (var>=97 && var<=122){
		printf("you enterd lowercae letter\n");
	}
	else{
		printf("nothing\n");
	}
}
