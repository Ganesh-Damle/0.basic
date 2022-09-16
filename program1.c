
//Q1.Write a program to print the value and size of the below variables.Take all
//the values from the user



#include <stdio.h>

void main(){
	char chr;
	int num;
	float rs;
	double crmoney;

	printf("Enter character: \n");
	scanf("%c",&chr);
	

	printf("Enter interger number:\n ");
	scanf("%d",&num);

	printf("Enter float number: \n");
	scanf("%f",&rs);

	printf("Enter crmoney: \n");
	scanf("%lf",&crmoney);

	printf("\n%c is a character \n",chr);
	printf("size of chr is %ld\n\n",sizeof(chr));

	printf("%d is a integer num \n",num);
	printf("size of num is %ld\n\n",sizeof(num));

	printf("%f is a float rs \n",rs);
	printf("size of rs is %ld\n\n",sizeof(rs));

	printf("%lf is a crmoney \n",crmoney);
	printf("size of crmoney is %ld\n",sizeof(crmoney));

}


