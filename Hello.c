# include <stdio.h>

int main(){

 int marks;
 printf("Enter your Grade: ");
 scanf("%d",&marks);

  if(marks>=90&& marks<=100){
    printf("Grade: A-Excellent!");
  }else if(marks>=75 && marks<=89){
    printf("Grade: B-Very Good");
  }else if(marks>=50 && marks<=74){
    printf("Grade: C-Good,Passed!");
  }
  else{
    printf("Grade: F-Failed, try agian");
  }
 
    return 0;
}
