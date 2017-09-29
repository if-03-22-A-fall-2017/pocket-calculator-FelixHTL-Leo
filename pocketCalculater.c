#include <stdio.h>
#define AMOUNT_OF_CHOICES 5


int check_If_Correct(int number){
  for (int i = 0; i < AMOUNT_OF_CHOICES; i++) {
    if(number == i){
      return 1;
    }
  }
  return 0;
}

int users_choice(){
  int choice = 0;
  int check;
  do{
    printf("Add(1)\n");
    printf("Subtract(2)\n");
    printf("Multiply(3)\n");
    printf("Divide(4)\n");
    printf("Stop program(0)\n");
    scanf("%d", &choice);
    check = check_If_Correct(choice);
    if(check == 0){
      printf("Input not allowed, please try again\n");
    }
  }while(check == 0);
  return choice;
}




int main(int argc, char *argv[]) {
  int choice = users_choice();
  return 0;
}
