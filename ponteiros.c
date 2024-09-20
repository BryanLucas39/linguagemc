#include <stdio.h>

int main(){

    int valor = 30;
    int *pvalor =&valor;
    printf("Valor da variavél é %d e o endereço da memória é %p\n",valor, &valor);
    printf("O endereço de pvalor é %p e o valor é %d\n",pvalor,*pvalor);

return 0;
}