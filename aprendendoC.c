#include <stdio.h>
#include <stdlib.h>

int main(){
    //========================= SAIDA DE DADOS =============================================

    // printf("Hello, world!\n");
    // printf("oiiiiiiiii!\n");
    // printf("oi tenho 19 anos!\n");
    // printf("valor inteiro: %d.\n",10);
    // printf("valor real: %f. \n", 3.14159265);
    // printf("valor real com apenas duas casas: %.2f. \n",3.141592); // é arrendondado
    // printf("dado de texto: %c. \n",'a');
    // printf("dado de texto: %s.\n","testando");

    //system("pause"); // se for rodar pelo win o sistema executa e ja fecha o programa, aq pausamos para ver o resultado
    // alterar o codigo tem que recompilar

    //========================= ENTRADA DE DADOS =============================================
    // especificadores de formato, d = decimal, f = float, s = sequencia de alfanumerico
    
    int idade = 0;
    printf("Valor inicial da idade:%d.\n",idade);

    printf("Digite uma idade:\n");
    scanf("%d", &idade);
    printf("Idade Informada: %d.\n", idade);


}