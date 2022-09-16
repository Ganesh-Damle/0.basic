
//Program 10: Write a program to check if a character is a vowel or
//consonant. Take all the values from the user

#include <stdio.h>
void main(){
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);

	if (ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U'){
		printf("you entered vowel");
	}else if (ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'){
		printf(" you entered vowel\n");
	}
	else {
		printf("you entered consonant\n");
	}
}
