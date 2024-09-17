#include <stdio.h>
// programa definirá qual é o maior valor do array


int main(){

    int num [5] = {10,5,8,14,13,28};

    int pos = 0;
    
    int maior = num[0];
    
    for(pos= 0; pos <= 5 ; pos++ ){
    
    if(num[pos] > maior){
        maior = num[pos];

    }
    
    printf("O maior valor do array é  %d\n", maior);

    return 0;
}

}
