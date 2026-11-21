//bibliotecas usadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void voltar(int* op) {
    printf("\n\nOpção 1 (Voltar)");
    printf("\n\nOpção: ");
    scanf("%d", op);
}

int main(){

 setlocale(LC_ALL, "Portuguese");

 //variável
char senha[51];
char nome[22];
char nome2[22];
char senha2[51];
int escolha[3];
int c;
int cadastro_valido = 1;
int cadastrado = 0;

do {
cadastro_valido = 1;
        system("cls");
        escolha[0] = 0;
        escolha[1] = 0;
printf("Sistema de cadastro");

printf("\n\nOpção 1 (Cadastro)");
printf("\nOpção 2(Entrar)");
printf("\nOpção 3(Sair)");

printf("\n\nOpção: ");
scanf("%d", &escolha[0]);
getchar();

switch(escolha[0]){
case 1:{
printf("Nome de usuário: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';

if (strlen(nome) > 20) {
printf("String muito grande");
nome[0] = '\0';
cadastro_valido = 0;
cadastrado = 0;
while ((c = getchar()) != '\n' && c != EOF) {
    // descarta os caracteres restantes
}

voltar(&escolha[1]);


}// if do nome

if(cadastro_valido == 1){
printf("Crie sua senha: ");
fgets(senha, sizeof(senha), stdin);
senha[strcspn(senha, "\n")] = '\0';

if (strlen(senha) > 50) {
printf("String muito grande");
senha[0] = '\0';
cadastro_valido = 0;
cadastrado = 0;
while ((c = getchar()) != '\n' && c != EOF) {
    // descarta os caracteres restantes
}

voltar(&escolha[1]);



}// if da senha
else {
    printf("Cadastro concluído!");
    cadastrado = 1;
}
}
voltar(&escolha[1]);
}// case 1
break;

case 2:{

if(cadastrado == 0){
    printf("Erro você ainda não cadastrou");
    voltar(&escolha[1]);

}
else {

printf("Digite seu nome: ");
fgets(nome2, sizeof(nome2), stdin);

nome2[strcspn(nome2, "\n")] = '\0';


printf("Digite sua senha: ");
fgets(senha2, sizeof(senha2), stdin);

senha2[strcspn(senha2, "\n")] = '\0';

if (strcmp(nome2, nome) == 0 &&
    strcmp(senha2, senha) == 0) {

    printf("Acesso concedido!");

}else{
printf("Acesso negado");

}


while ((c = getchar()) != '\n' && c != EOF) {
    // descarta os caracteres restantes
}
voltar(&escolha[1]);

}
}// case 2
break;

case 3:{
return 0;
}
break;

default:{
    printf("Erro opção inválida");
    voltar(&escolha[1]);
}



}//switch

}while(escolha[1] == 1);




return 0;

}// main




