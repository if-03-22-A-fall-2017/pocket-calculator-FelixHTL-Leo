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

void get_operands(double* operand1, double* operand2)
{
    printf("Erster Operande/Zweiter Operand: ");
    scanf("%lf/%lf", operand1, operand2 );

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
  double operand1, operand2;
  get_operands(&operand1, &operand2);
  if(choice == 0){
    return 0;
  }
  else if (choice == 1) {
    printf("Result of %lf + %lf = %lf\n", operand1, operand2, operand1 + operand2);
  }
  else if(choice == 2){
    printf("Result of %lf - %lf = %lf\n", operand1, operand2, operand1 - operand2);
  }
  else if(choice == 3){
    printf("Result of %lf * %lf = %lf\n", operand1, operand2, operand1 * operand2);
  }
  else if(choice == 4){
    if(operand2 == 0){
      printf("Division durch null!!!\n");
      return 0;
    }
    printf("Result of %lf / %lf = %lf\n", operand1, operand2, operand1 / operand2);
  }


  return 0;
}
