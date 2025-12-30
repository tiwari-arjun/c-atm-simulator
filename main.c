#include <stdio.h>
#include <string.h>

int main(){

    int pin; 
    int correctPin = 1234;
    int attempts = 0;
    float balance = 1000;
    float depositbalance = 0;
    float withdrawBalance = 0;
    int checkPin;

    int choices;

    printf("\nWelcome to ATM\n");

   while (attempts < 3){

     printf("Enter the PIN : ");
    scanf("%d", &pin);

     if(pin == correctPin){
        printf("Successfully Entered...");
       break;
    }
    else{
        attempts++;
        printf("Wrong PIN. Attempts left : %d \n",3 - attempts );
    }
      printf("Invalid PIN. Try again tomorrow");
   }

   do{
    printf("\n Welcome to the ATM \n");
    printf("1. Check Balance \n");
    printf("2. Deposit Money \n");
    printf("3. Withdraw \n");
    printf("4. Change PIN \n");
    printf("5. Exit \n");
    printf("Enter your choice :");
    scanf("%d", &choices);
   

   switch (choices)
   {
   case 1: 
    printf("Your balance is : %.2f\n", balance);
    break;
   
    case 2 : 
    printf("Enter amount you like to deposit : ");
    scanf("%f", &depositbalance);
    balance += depositbalance;
    printf("Deposit Successfully\n");
    break;

    case 3 :
    printf("Enter amount you like to withdraw : ");
    scanf("%f", &withdrawBalance);
    balance -= withdrawBalance;
    printf("Withdraw Successfull.\n");
    printf("Your current balance is now %.2f", balance);
    break;


    case 4: 
    printf("Enter the current PIN : ");
    scanf("%d", &checkPin);
    

    if(checkPin == correctPin){
      printf("Correct Pin \n");
      printf("Enter the new PIN :");
      scanf("%d", &correctPin);
      printf("Changed Successfully");
    }

    else{
      printf("Incorrect Password ");
      
    }
    break;

   default:
   printf("\nThankyou for using ATM \n");
   printf("\nVisit us later \n");
   
    break;
   }
  }
   while(attempts != 5);

    return 0;
}