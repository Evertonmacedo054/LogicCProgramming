
#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localidade

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");  // Configura a localidade para Portugu�s do Brasil
    printf("Ol�, Mundo!\n");  // Imprime "Ol�, Mundo!" na tela
    printf("Ol�, Mundo 2!\n");  // Imprime "Ol�, Mundo 2!" na tela
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}



 