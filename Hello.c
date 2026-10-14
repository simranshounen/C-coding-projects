# include <stdio.h>

int main(){

  int age;
  printf("enter your age: ");
  scanf("%d",&age);
  if(age<=12){
    printf("Child\n 50 percent, discount");
  }else if(age>=60){
    printf("Senior Citizen\n 30 percent, discount");
  }else{
    printf("full ticket , no discount");
  }

    return 0;
}
