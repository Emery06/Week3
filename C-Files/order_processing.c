#include <stdio.h>
#include <stdlib.h>
void orderPizza (float price)
{
	price=12.99;
	printf("You have ordered a Pizza!\nPrice:$%.2f\n",price);
}
void orderBurger(float price)
{
	price=8.99;
	printf("You have ordered a Burger!\nPrice:$%.3f\n",price);
}
void orderPasta(float price)
{
	price=10.49;
	printf("You have ordered Pasta!\nPrice:$%.2f\n",price);
}
void orderSalad(float price)
{
	price=7.49;
	printf("You have ordered Salad!\nPrice:$%.2f\n",price);
}

int main()
 {
 	int order;
 	float price;
 	float prix;
 	
 	
 	printf("Welcome to the order system \n");
 	printf("1. Pizza($12.99)\n");
 	printf("2. Burger($8.99)\n");
 	printf("3. Pasta($10.49)\n");
 	printf("4. Salad($7.99)\n");
 
 	switch(order){
 		case 1:
 			printf("Please choose your order(1-4): ");
 	        scanf("%d",&order);
 	        orderPizza(price);
 			break;
 		case 2:
 			printf("Please choose your order(1-4): ");
 		    scanf("%d",&order);
 	        orderBurger(price);
 			break;
 		case 3:
 		    printf("Please choose your order(1-4): ");
 		    scanf("%d",&order);
 		    orderPasta(price);
 			break;
 		case 4:
 			printf("Please choose your order(1-4): ");
 		    scanf("%d",&order);	
 		    orderSalad(price);
 			break;
	 }
	 
	 
	 
	 
	    return 0;
}
 	
