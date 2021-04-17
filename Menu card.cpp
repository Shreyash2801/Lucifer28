#include<stdio.h>
int main()
{
	//1. Dispaly the menu
        printf("Pick an item: \n1.Pizza,Rs239\n2.Burger,Rs129\n3.Pasta,Rs179\n4.French Fries,Rs99\n5.Sandwich,Rs 149");	
	//2.Read their choice
	  int choice=0;
	  scanf("%d",&choice);
	//3.Dispaly based on their choices
	     
		 switch(choice) 
	{
		 case 1:
		     printf("Food Item- Pizza\nPrice-Rs 239");
		     break;
		 case 2:
		     printf("Food Item-Burger\nPrice-Rs 129");
		 	 break;
		 case 3:
		     printf("Food Item-Pasta\nPrice-Rs 179");
		 	 break;
		 case 4:
		     printf("Food Item- French Fries\nPrice-Rs 99");
		 	 break;
		 case 5:
		     printf("Food Item- Sandwich\nPrice-Rs 149");
		 	 break;
		 	 
}
}
		
	
	
	
	
	
	
	
	
	
	

