#include <stdio.h>

int main(){

    //numero reservado para o usuário decidir qual numero será multiplicado pela variavél.

    int num;

    //variavél que inicia a tabuada em zero, que vai até o número 10.
    
    int contar = 0;

//guarda o reesultado va variavel (num) vezes a variavél (contar) e apresenta o resultado. 

    int rs;

printf("Digite o número da para efetuar a tabuada: \n");
scanf("%d",&num);

while( contar <= 10 ){



rs= num * contar;
printf("%d x %d = %d\n",num,contar,rs);

contar++;
}

return 0;

}