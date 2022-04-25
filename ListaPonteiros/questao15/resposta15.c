void qsort(float *a, int n){
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
    int n = 0;
    float *a, aux;
    void (*ptrF[])(float *, int) = {qsort};

    printf("entre com a quantidade de valores desejados: \n");
    scanf("%i", &n);

    a = malloc(n * sizeof(float));//aloca a memória necessária

    printf("preencha o vetor\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    //usando qsort
    (qsort)(a, n);

    //imprimindo o vetor
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", a[i]);
    }

    return 0;
}
