#include <stdio.h>
#include <stdlib.h>

//esta fun��o � necess�ria para ser usada como par�metro em qsort. Aqui � mostrada a rela��o de tamanho dos valores
//de acordo com a compara��o � retornado 1 se a>b, -1 se a<b e 0 se a==b
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

    a = malloc(n * sizeof(float));//aloca a mem�ria necess�ria

    //PREENCHE O VETOR
    printf("preencha o vetor\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    //LA�O N�O SER� MAIS UTILIZADO, OPERA��O REALIZADA PELA FUNC QSORT
    //s�o usados dois la�os para comparar os valores no vetor e reordena-lo utilizando uma vari�vel auxiliar.
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

    //esta fun��o ordena o vetor e recebe como par�metro o vetor, a quantidade de itens no vetor, o tamanho de cada elemento do vetor
    // e a fun��o que determina a rela��o entre os valores do vetor.
    qsort(a, 5, sizeof(float), compara);

    //IMPRIME VETOR
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", a[i]);
    }

    return 0;
}
