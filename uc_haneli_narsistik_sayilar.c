#include <stdio.h>

int main() {

  printf("3-digit narcissistic numbers :\n");

  int i;
  for (i=100; i<1000;i++){
    int result = 0;
    int sayi = i;
    while(sayi>0){
      result += (sayi%10) * (sayi%10) *(sayi%10);
      sayi /= 10;
    }

    if(result == i){
      printf("%d\n",result);
    }
    else{
    }
  }

  return 0;
}
