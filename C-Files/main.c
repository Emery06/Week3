 #include <stdio.h>
#include <stdlib.h>
void greetUser(char name[])
{
	printf("\Hello,%s Welcome to Dreamer's Programming class",name);
}
char* thankUser()
{
	return ".";
}

int main()
{
	char name[]=" ";
	printf("Enter your name: ");
	scanf("%c",&name);
	greetUser(name);
	char* s = thankUser();
	printf("Thank you for practicing coding today %s\n",s);
	
	
	return 0;
}
