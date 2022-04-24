int main(void){
    int mat[4], *p, x;
    mat[0] = 1;
    mat[1] = 2;
    mat[2] = 3;
    mat[3] = 4;
    mat[4] = 5;

    p = mat + 1; //expressão válida, armazena o endereço de mat[1] em p
    //p = mat++; // expressão inválida pois é um incremento, ao invés de uma técnica para percorrer o vetor;
    //p = ++mat; // expressão inválida pois é um incremento, ao invés de uma técnica para percorrer o vetor;
    x = (*mat)++; // expressão válida pois pega o valor da posição mat[0].

    printf("%d", x);
    printf("%d", *p);
    return 0;
}
