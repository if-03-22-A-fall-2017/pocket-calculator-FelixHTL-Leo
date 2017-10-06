#include <stdio.h>
#include <limits.h>
#define AMOUNT_OF_CHOICES 5

int check_overflow(double overflow, int choice, double operand1, double operand2){
  switch(choice){
    case 1:
    if(operand1 + operand2 > overflow){
      return 1;
    }
      break;
    case 2:
    if(operand1 - operand2 > overflow){
      return 1;
    }
      break;
    case 3:
    if(operand1 * operand2 > overflow){
      return 1;
    }
      break;
    case 4:
    if(operand1 / operand2 > overflow){
      return 1;
    }
      break;
  }
  return 0;
}

int check_underflow(double underflow, int choice, double operand1, double operand2){
  switch(choice){
    case 1:
    if(operand1 + operand2 < underflow){
      return 1;
    }
      break;
    case 2:
    if(operand1 - operand2 < underflow){
      return 1;
    }
      break;
    case 3:
    if(operand1 * operand2 < underflow){
      return 1;
    }
      break;
    case 4:
    if(operand1 / operand2 < underflow){
      return 1;
    }
      break;
  }
  return 0;
}
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
    printf("Erster Operande/ Zweiter Operand: ");
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
  int choice;
  do{
    choice = users_choice();
    double operand1, operand2;
    double overflow = INT_MAX;
    double underflow = INT_MIN;
    if (choice == 1) {
      get_operands(&operand1, &operand2);
      if(check_overflow(overflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else if(check_underflow(underflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else{
        printf("Result of %2lf + %2lf = %2lf\n", operand1, operand2, operand1 + operand2);
      }
    }
    else if(choice == 2){
      get_operands(&operand1, &operand2);
      if(check_overflow(overflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else if(check_underflow(underflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else{
      printf("Result of %2lf - %2lf = %2lf\n", operand1, operand2, operand1 - operand2);
      }
    }
    else if(choice == 3){
      get_operands(&operand1, &operand2);
      if(check_overflow(overflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else if(check_underflow(underflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else{
      printf("Result of %2lf * %2lf = %2lf\n", operand1, operand2, operand1 * operand2);
      }
    }
    else if(choice == 4){
      get_operands(&operand1, &operand2);
      if(operand2 == 0){
        printf("Division durch null!!!\n");
      }
      else if(check_overflow(overflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else if(check_underflow(underflow, choice, operand1, operand2) == 1){
        printf("Its an overflow\n");
      }
      else{
        printf("Result of %2lf / %2lf = %2lf\n", operand1, operand2, operand1 / operand2);
      }
  }

}while(choice != 0);


  return 0;
}
