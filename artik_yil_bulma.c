#include <stdio.h>

int main() {
  int year;
  printf("Year : ");
  scanf("%d",&year);

  if(year % 100 == 0 && year % 400 != 0){
    printf("Bu artik yil değildir.\n");
  }else if(year % 400 == 0 || year % 4 == 0){
    printf("Bu artik yildir.\n");
  }else{
    printf("Bu artik yil değildir.\n");
  }

  return 0;
}
