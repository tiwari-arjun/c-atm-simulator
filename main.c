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
        printf("Successfully Entered...\n");
       break;
    }
    else{
        attempts++;
        printf("Wrong PIN. Attempts left : %d \n",3 - attempts );
    }
     }

    if(attempts == 3){
printf("Invalid PIN. Try again tomorrow");
         return 0;
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

   do {
    printf("Enter amount you would like to deposit: ");
    scanf("%f", &depositbalance);

    if (depositbalance <= 0) {
        printf("Enter a valid number!\n");
    }

  } while (depositbalance <= 0);

    balance += depositbalance;
    printf("Deposit successfully.\n");
    break;

    case 3 :

    do{
       printf("Enter amount you like to withdraw : ");
      scanf("%f", &withdrawBalance);

        if (withdrawBalance <= 0){
       printf("Please Enter a valid Amount...\n");
    }
    } while(withdrawBalance <= 0);
   
  
    if(balance > withdrawBalance){
      balance -= withdrawBalance;
    printf("Withdraw Successfull.\n");
    printf("Your current balance is now %.2f\n", balance);
    }
    
    else{
      printf("Insufficient Amount. Your current balance is %.2f\n", balance);
    }
    break;


    case 4: 

    do{

    printf("\nEnter the current PIN : ");
    scanf("%d", &checkPin);

    if(checkPin != correctPin){
       printf("Incorrect Password \n");
    }
    } while(checkPin != correctPin);

     printf("\nCorrect Pin \n");
      printf("Enter the new PIN :");
      scanf("%d", &correctPin);
      printf("Changed Successfully");
    break;

   default:
   printf("\nThankyou for using ATM \n");
   printf("\nVisit us later \n");
   return 0;

   }
  }
   while(attempts != 5);

    return 0;
}