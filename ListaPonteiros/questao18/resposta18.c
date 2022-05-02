void multiplicaMatriz(int **a, int **b, int **c, int nla, int nca, int ncb){
    int aux;
    for(unsigned int i=0; i<nla; i++)
    {
        for(unsigned int j=0; j<ncb; j++)
        {
            aux = 0;
            for(unsigned int k=0; k<nca; k++)
            {
                aux += (a[i][k])*(b[k][j]);
            }
            c[i][j] = aux;
        }
    }
}

/*void limpaMatriz(int **m, nl, nc){
    for(unsigned int i=0; i<nl; i++)
    {

        for(unsigned int j=0; j<nc; j++)
        {
            m[i][j] = nullptr;
        }
    }
}*/

void preencheMatriz(int **m, int nl, int nc){
    for(unsigned int i=0; i<nl; i++)
    {

        for(unsigned int j=0; j<nc; j++)
        {
            printf("Elemento a[%d][%d] da matriz.", i, j);
            scanf("%d", &m[i][j]);
        }
    }

}

void imprimeMatriz(int **m, int nl, int nc){
     for(unsigned int i=0; i<nl; i++)
    {

        for(unsigned int j=0; j<nc; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n ");
    }
}

int main(void){
    int **a, **b, **c;
    int nla, nca, ncb;

    //RECEBENDO O TAMANHO DAS MATRIZES
    printf("entre com o número de linhas e colunas de A, seguido pelo número de colunas de B, \n assumindo que B tem NL igual ao NC de A. \n");
    scanf("%d %d %d", &nla, &nca, &ncb);

    //ALOCANDO A MEMÓRIA PARA AS MATRIZES A, B E C DA MANEIRA MAIS CORRETA.

    //PRIMEIRO ALOCAMOS AS LINHAS, DA MANEIRA TRADICIONAL. APOS ISSO COLOCAMOS TODOS OS ESPAÇOS DA MATRIZ EM A[0]
    a = malloc(nla*sizeof(int*));
    a[0] = malloc(nla*nca*sizeof(int));

    for(unsigned int i=1; i<nla; i++)
    {
        a[i] = a[i-1] + nca;
    }

    b = malloc(nca*sizeof(int*));
    b[0] = malloc(nca*ncb*sizeof(int));

    for(unsigned int i=1; i<nca; i++)
    {
        b[i] = b[i-1] + ncb;
    }

    c = malloc(nla*sizeof(int*));
    c[0] = malloc(nla*ncb*sizeof(int));

    for(unsigned int i=1; i<nla; i++)
    {
        c[i] = c[i-1] + ncb;
    }
    printf("Preencha a matriz A");
    preencheMatriz(a, nla, nca);

    printf("Preencha a matriz B");
    preencheMatriz(b, nca, ncb);
    //limpaMatriz(c, nla, ncb);

    multiplicaMatriz(a, b, c, nla, nca, ncb);

    imprimeMatriz(c, nla, ncb);

    free(a[0]);
    free(a);

    free(b[0]);
    free(b);

    free(c[0]);
    free(c);
}
