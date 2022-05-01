#include<stdlib.h>

void somaVetor(int *v1, int *v2, int *v3, int n){
    for (unsigned int i=0; i<n; i++)
    {
        v3[i] = v1[i]+v2[i];
    }
}

void imprimeVetor (int* v, int n){
    printf("Vetor escrito: \n");
    for (unsigned int i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void){
    int *v1, *v2, *v3, n;

    //RECEBENDO O TAMANHO DOS VETORES:
    printf("entre com o tamanho dos vetores");
    scanf("%d", &n);

    //ALOCANDO MEMÓRIA PARA OS TRÊS VETORES
    v1 = malloc(n*sizeof(int));
    v2 = malloc(n*sizeof(int));
    v3 = malloc(n*sizeof(int));

    //PREENCHENDO OS VETORES
    for(unsigned int i=0; i<n; i++)
    {
        printf("entre com o elemento %d do vetor 1 \n", i);
        scanf("%d", &v1[i]);
    }
    imprimeVetor(v1, n);
    for(unsigned int i=0; i<n; i++)
    {
        printf("entre com o elemento %d do vetor 2 \n", i);
        scanf("%d", &v2[i]);
        v3[i]=NULL;
    }
    imprimeVetor(v2, n);
    somaVetor(v1, v2, v3, n);

    printf("vetor soma:");
    imprimeVetor(v3, n);
    return 0;

}
