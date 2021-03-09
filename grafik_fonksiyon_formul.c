#include <stdio.h>


int main(){

    float x;

    printf("input : ");
    scanf("%f",&x);

    if(x >= -2 && x <= 0){
        printf("result : %f",x);
    }
    else if(x > 0 && x <= 2){
        printf("result : %f",x*2);
    }
    else if(x > 2 && x <= 5){
        printf("result : %f",(20-4*x)/3);
    }
    else{
        printf("Wrong Entry!");
    }

    getch(); //beklemesi için

    return 0;
}