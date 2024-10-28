
#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localidade

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");  // Configura a localidade para Português do Brasil
    printf("Olá, Mundo!\n");  // Imprime "Olá, Mundo!" na tela
    printf("Olá, Mundo 2!\n");  // Imprime "Olá, Mundo 2!" na tela
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}



 