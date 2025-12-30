#include <stdio.h>
#include <string.h>

int main(){

    int pin; 
    int correctPin = 1234;
    int attempts = 0;
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

    return 0;
}