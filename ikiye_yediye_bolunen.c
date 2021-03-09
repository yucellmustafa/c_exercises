#include <stdio.h>

int main(){

    int result = 0;

    for (int i=1;i<=100;i++){
        if(i%2==0 || i%7==0){
            
        }
        else{
            result +=i;
        }
    }

    printf("result = %d",result);

    getch(); //konsolu hemen kapatmasın diye.

    return 0;
}
