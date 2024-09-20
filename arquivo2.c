#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){

    char *label_nome ="Nome: ";
    char *label_email ="Email: ";
    char *label_telefone="Telefone: ";
    char *label_idade ="Idade: ";

    char *input_nome[30];
    char *input_email[50];
    char *input_telefone[15];
    char *input_idade[4];

    //ponteiro que armazena o endereço 
    //de memória  do arquivo.

    FILE *cadastro;

  cadastro =fopen ("files/cadastro.txt","a+");
  
  printf("Digite seu nome completo\n");
  fgets(input_nome,30,stdin);
 


printf("Digite o seu e-mail\n");
fgets(input_email,50,stdin);



printf("Digite seu Número de telefone\n")
fgets(input_telefone, cadastro);


printf("Digite seu Número de telefone\n")
fgets(input_idade, cadastro);


printf("Seu cadastro foi realizado com sucesso");
  
}