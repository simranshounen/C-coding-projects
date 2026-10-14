# include <stdio.h>

int main(){

 int correct_pin = 1234;
 int balance = 10000;
 int entered_pin;
 printf("enter your pin: " );
 scanf("%d",&entered_pin);

  
 if(correct_pin == entered_pin){
   int withdrawel_amount;
 printf("enter your withdrawel amount: ");
  scanf("%d",&withdrawel_amount);
 
 if(withdrawel_amount <= balance){
  balance -=withdrawel_amount;
  printf("withdrawel succesful! Remaining balance: %d\n",balance);
 }else{
  printf("insufficient balance\n");
 }
  }
  else{
    printf("Wrong PIN! Access denied.\n" );
  }
 

    return 0;
}
