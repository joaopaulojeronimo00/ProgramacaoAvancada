#include <stdio.h>
#include <stdlib.h>

//esta função é necessária para ser usada como parâmetro em qsort. Aqui é mostrada a relação de tamanho dos valores
//de acordo com a comparação é retornado 1 se a>b, -1 se a<b e 0 se a==b
int compara(const void *a, const void *b) {
   if (*(float*)a > *(float*)b) {
      return 1;
   } else if (*(float*)a < *(float*)b) {
      return -1;
   } else {
      return 0;
   }
}


int main()
{
    int n = 0;
    float *a, aux;

    printf("entre com a quantidade de valores desejados: \n");
    scanf("%i", &n);

    a = malloc(n * sizeof(float));//aloca a memória necessária

    //PREENCHE O VETOR
    printf("preencha o vetor\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    //LAÇO NÃO SERÁ MAIS UTILIZADO, OPERAÇÃO REALIZADA PELA FUNC QSORT
    //são usados dois laços para comparar os valores no vetor e reordena-lo utilizando uma variável auxiliar.
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }*/

    //esta função ordena o vetor e recebe como parâmetro o vetor, a quantidade de itens no vetor, o tamanho de cada elemento do vetor
    // e a função que determina a relação entre os valores do vetor.
    qsort(a, 5, sizeof(float), compara);

    //IMPRIME VETOR
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", a[i]);
    }

    return 0;
}
