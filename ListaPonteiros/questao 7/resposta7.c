int main(void){
    int mat[4], *p, x;
    mat[0] = 1;
    mat[1] = 2;
    mat[2] = 3;
    mat[3] = 4;
    mat[4] = 5;

    p = mat + 1; //express�o v�lida, armazena o endere�o de mat[1] em p
    //p = mat++; // express�o inv�lida pois � um incremento, ao inv�s de uma t�cnica para percorrer o vetor;
    //p = ++mat; // express�o inv�lida pois � um incremento, ao inv�s de uma t�cnica para percorrer o vetor;
    x = (*mat)++; // express�o v�lida pois pega o valor da posi��o mat[0].

    printf("%d", x);
    printf("%d", *p);
    return 0;
}
