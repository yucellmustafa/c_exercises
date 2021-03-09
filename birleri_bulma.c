#include <stdio.h>

int main(){

    char inputs[30];
    int one = 0;

    printf("Enter Number :");
    scanf("%s",&inputs);

    for (int i=0;i<=30;i++){
        if(inputs[i] == '1'){
            one++;
        }
    }

    printf("The Ones : %d",one);

    getch(); //çıktıyı görmek için beklemesi için.

    return 0;
}