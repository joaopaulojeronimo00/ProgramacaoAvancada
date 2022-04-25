#include <stdio.h>
#include <stdlib.h>

void ehZero (int a){
    if(a==0)
    {
        printf("eh Zero");
    }else{
         printf("nao eh Zero");
    }
}

int main (void){
    int i = 2;

    void (*ptrF[])(int) = {ehZero};

    (*ptrF)(i);
    return 0;
}
