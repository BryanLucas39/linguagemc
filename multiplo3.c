#include <stdio.h>

int main(){

//Declaração de variavel de contagem de zero(0) até cem(100).

    int contar = 0;

//Declaraçao de variavel de conta de numeros multiplos
//3

    int qtd = 0;

while ( contar <= 100 ){

if (contar % 3 == 0){
    printf("%d\n",contar);
    qtd++;
}
    contar++;
} 
    printf("Quantidade de multiplos de 3 é: ""%d\n",qtd);

    return 0;
}