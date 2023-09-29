#include <stdio.h>

int main(){

    int senha;
    int senhaCadastrada;

    scanf ("%d", &senha);


    printf ("senha cadastrada: %.4d\n", senha);

    while (1) {
     
        scanf ("%d", &senhaCadastrada);
        if (senhaCadastrada != senha){
            printf ("senha invalida!\n");
        } else {
            (senhaCadastrada == senha);
            printf ("senha valida!\n");
            break;
        }
    }

    return 0;
}