#include <stdio.h>
#include <stdlib.h>
int main()
{
	int amount;
	int balance=5000;
	int input;
	int cookie ;
	char name[100];
	
	    printf("Welcome to MTN services\n");
	    printf("Choose an option:\n");
		printf("1. Airtime recharge\n");
		printf("2. Internet bundle\n");
		printf("3. Mobile Money transfer\n");
		printf("4. Check balance\n");
		printf("Input : ");
		scanf("%d",&input);
	
	    switch(input){
	        case 1:
	        	printf("Enter Amount : ");
	        	scanf("%d",&amount);
	    		printf("Recharge succesful!You have added Rwf %d to your phone\n",amount);
	    		break;
	    	case 2:
	    		printf("Enter Amount: ");
	    		scanf("%d",&cookie);
	    		if( cookie >= 500 ){
	    			printf("Sufficient for a valid bundle\n");
				}
				else{
					printf("Not sufficient for a valid bundle\n");
	    		break;
				}
	    	case 3:
	    		printf("Enter recipient's name: \n");
	    		scanf("%s",&name);
				printf("Enter Amount: \n");
				
				scanf("%d",&amount);
				printf("Transfer successful!You have transferred Rwf %d, to %s\n",amount,name);
				break;
	    	case 4:
	    		printf("Your current Balance is RWf %d",balance);
	    		break;
	    	default:
	    		printf("Error!Please try a valid option");
		}

	
	
	return 0;
	}
