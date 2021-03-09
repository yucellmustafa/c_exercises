#include <stdio.h>

int main(void) {
  float result = 0, numb;
  char mark;

  printf("---------------Calculator---------------\n\n");
  printf("First : (number mark number) so (5 + 4)\n");
  printf("Continue : (mark number) so (+ 4)\n");
  printf("Finish : (q 0)\n\n");
  printf("----------------------------------------\n\n");

  scanf("%f %s %f",&result, &mark, &numb);
  do{
    switch(mark){ //It makes the process according to the sign we entered.
      case '+':
          result += numb;
          break;
      case '-':
          result -= numb;
          break;
      case '*':
          result *= numb;
          break;
      case '/':
          result /= numb;
          break;
      default:
          break;

    }

    printf("\n%.2f ",result); //Prints the result in each cycle.

    scanf("%s %f",&mark, &numb); // We continue by typing "mark number". for example "+ 4".
  }while(mark != 'q' && mark != 'Q'); // If we enter the letter "q" or "Q" instead of the sign, the transactions are terminated.

  printf("\n \nResult : %f",result); //Prints the result on the screen before the program ends.

  getch(); //To remain on the terminal screen when the program is finished.

  return 0;
}