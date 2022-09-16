
//Q2.WAP print the value of the below expressions.


#include <stdio.h>
void main(){
	int x;
	int ans,ans1,ans2,ans3;
	printf("Enter value: ");
	scanf("%d",&x);

	ans=++x + x++ + ++x;
	printf("\nthe value of ans is %d\n",ans);
	printf("value of x is %d\n\n",x);

	ans1=++x + ++x + ++x + ++x;
	printf("the value of ans1 is %d\n",ans1);
	printf("value of x is %d\n\n",x);

	ans2=x++ + x++ + ++x + x++ + ++x;
	printf("the value of ans2 is %d\n",ans2);
	printf("value of x is %d\n\n",x);


	ans3=x++ + x++ + x++ + x++;
	printf("the value of ans3 is %d\n",ans3);
	printf("value of x is %d\n",x);

}
