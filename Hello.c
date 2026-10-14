# include <stdio.h>

int main(){
 int ticket_price = 300;
int wallet = 1000;
int age;
int ticket;

printf("enter you age: ");
scanf("%d",& age);


if(age>=18){

  printf("enter how many tickets you want: ");
  scanf("%d",& ticket);
    int total_cost = ticket*ticket_price;

  if(total_cost <=wallet){
    wallet -= total_cost;
    printf("get the ticket! Remaining blance: %d\n ",wallet);
    

    int popcorn_choice;
    printf("do you want popcorn? (1 for yes 0 for no) ", wallet);
    scanf("%d",&popcorn_choice);
    if(popcorn_choice == 1){
      wallet -= 150; //popcorn rate
      printf("enojoy your popcorn! final remaining balance: %d\n",wallet);

    } else{
    printf("no popcorn added.enojoy your movie! :)\n");
  } }
else{
  printf("insufficient wallet balance\n");
 }}
else{
  printf("Booking denied: you must be 18 or older to book tickets.\n");
 }
    return 0;
}
