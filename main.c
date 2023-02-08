#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("\t *Verificando o valores para formação de um triângulo*\n");
    printf(" Sendo:\n a- medida do lado esquerdo\n b- medida do lado direito\n c- medida da base.\n");
    printf("\n Digite os valores para a, b e c.\n");
    printf(" OBS: Digite apenas números inteiros e positivos !\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c >b && b + c >a ){
        if(a == b && a == c && b == c){
            printf(" Triângulo equilatero.\n");
        }
        if(a == b && a != c && b != c){
            printf(" Triângulo isósceles\n");
        }
        if(a != b && a != c && b != c){
            printf(" Triângulo escaleno\n");
        }
        if(a != b && a != c && b == c){
            printf(" Esse triângulo não exite!\n");
        }
    }else{
        printf(" Não forma um triangulo!");
    }

    return 0;
}
