#include<time.h>
#include<stdlib.h>
#include<stdio.h>

void sort(float *a, int n){
     //são usados dois laços para comparar os valores no vetor e reordena-lo utilizando uma variável auxiliar.
    int b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}



int main()
{
    clock_t t;
    int n = 0;
    float *a, aux;
    void (*ptrF[])(float *, int) = {qsort};

    printf("entre com a quantidade de valores desejados: \n");
    scanf("%i", &n);

    a = malloc(n * sizeof(float));//aloca a memória necessária

    printf("preencha o vetor\n");
    for (int i = 0; i < n; i++)
    {
        a[i]=rand();
    }
    t = clock();
    //usando qsort
    (sort)(a, n);
    t = clock() - t;
    //imprimindo o vetor
    /* for (int i = 0; i < n; i++)
    {
        printf("%f, ", a[i]);
    }*/
     printf("Tempo de execucao da 15: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double


    return 0;
}
