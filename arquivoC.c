#include <stdio.h>
//para efetuar a importação de arquivos, é necessário utilizar.
//para fazer isso, incluimos a biblioteca <stdlib>
#include <stdlib.h> 
//importa a biblioteca string que é uma biblioteca que permitira que escrevamos códigos
//mais elaborados.

#include <string.h>


int main(){

                         //Declaração  de variavél de palavra como um ponteiro. 
system ("clear");                           //Caracteres que formam a string.
char palavra[20];

printf("Digite o seu nome completo: \n");       //O comando fgets (file -> gets obter).
//scanf("%s", palavra);                           //Assim iremos obter o texto que o usuário ira inserir.
fgets(palavra, 20, stdin);

FILE *ar;
ar = fopen("files/teste.txt","w");

fseek(ar, 0,SEEK_END);
fputs(palavra, ar);


printf("O arquivo está no endereço:%p\n",ar);
fclose(ar);

}