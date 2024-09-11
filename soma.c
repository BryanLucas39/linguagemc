# include <stdio.h>

int main(){

   
   
     int v1,v2,rs;

//O comando (scanf) realiza a captura dos dados que o usuário ira digitar (nesse caso, numeros decimais), 
//Após capturar o número será alocado na variavel v1.

    printf("Digite um número:\n");
    scanf("%d",&v1);


    printf("Digite outro número:\n");
    scanf("%d",&v2);

    printf("O valor de v1 é %d e esta em %p",v1,&v1);
    printf("O valor de v2 é %d e esta em %p",v2,&v2);

    rs = v1+v2;
    printf("Valor de soma é de %d \n",rs);

return 0;

}