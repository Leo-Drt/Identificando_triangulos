#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("\t *Verificando o valores para forma��o de um tri�ngulo*\n");
    printf(" Sendo:\n a- medida do lado esquerdo\n b- medida do lado direito\n c- medida da base.\n");
    printf("\n Digite os valores para a, b e c.\n");
    printf(" OBS: Digite apenas n�meros inteiros e positivos !\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c >b && b + c >a ){
        if(a == b && a == c && b == c){
            printf(" Tri�ngulo equilatero.\n");
        }
        if(a == b && a != c && b != c){
            printf(" Tri�ngulo is�sceles\n");
        }
        if(a != b && a != c && b != c){
            printf(" Tri�ngulo escaleno\n");
        }
        if(a != b && a != c && b == c){
            printf(" Esse tri�ngulo n�o exite!\n");
        }
    }else{
        printf(" N�o forma um triangulo!");
    }

    return 0;
}
