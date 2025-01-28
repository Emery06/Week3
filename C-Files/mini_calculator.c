#include<stdio.h>
#include<stdlib.h>

void add(int x, int y){
//    return x+y;
     int sum=x+y;
     printf("Result of %d and %d is %d",x,y,sum);

}
void sub(int a, int b){
	int difference=b=a;
	printf("Result of %d -%d is %d",b,a,difference);
    
}
void mul(int d, int e)
{
	int power=d*e;
	printf("Result of %d * %d is %d",d,e,power);
    
}
void divide(float g, float h){
	float quo=g/h;
	printf("Result of %.0f/%.0f is %.2f",g,h,quo);
    
}

int main(){
int num1, num2, choice;
 	
 	printf("Enter first number: ");
 	scanf("%d",&num1);
 	printf("Enter second number: ");
 	scanf("%d",&num2);
 	printf("Select operation:\n");
 	printf("1.Add\n");
 	printf("2.Substraction\n");
 	printf("3.Multiply\n");
 	printf("4.Divide\n");
 	printf("Enter choice(1/2/3/4): ");
    scanf("%d",&choice);
    

  switch(choice){
    case 1:
//        printf("%d", add(num1,num2));
        add(num1,num2);
        break;
    case 2:
//        printf("%d ", sub(num1,num2));
        sub(num1,num2);
        break;
    case 3:
//        printf("%d", mul(num1,num2));
        mul(num1,num2);
        break;
    case 4:
//        printf("%d", divide(num1,num2));
        divide(num1,num2);
        break;
    default:
        printf("That is not a valid choice.");
        break;
        
}
}

