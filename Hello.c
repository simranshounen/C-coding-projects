# include<stdio.h>

int main() {
char ch;
printf("Enter your character: ");
scanf("%c", & ch);

if(ch >= 'A' && ch <= 'Z'){
  printf("the character is an uppercase letter \n");
 }
 else if(ch >= 'a' && ch <= 'z'){
  printf("the character is an lowercase letter \n");
 }
 else {
  printf("the character is not an english word/letter\n");
 }


return 0;
}