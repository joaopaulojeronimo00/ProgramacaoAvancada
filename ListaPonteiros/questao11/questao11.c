int main()
{
    float aloha[10];
    float coisas[10][5];
    float *pf;
    float value = 2.2;
    int i = 3;
    aloha[2] = value;               //comando v�lido, armazena em aloha[2] o valor de value.
    scanf("%f", &aloha);            //comando v�lido mas n�o realiza nenhuma opera��o em aloha, aparentemente
    // aloha = value;               //comando inv�lido, pois n�o especifica a posi��o de aloha em que value ser� colocado
    printf("%f", aloha);            //comando v�lido, mostra o valor da primeira posi��o em aloha.
    coisas[4][4] = aloha[3];        //comando v�lido, armazena em coisas[4][4] o valor que est� em aloha[3]
    // coisas[5] = aloha;           //comando inv�lido pois n�o � poss�vel armazenar aloha em coisas[5]
    // pf = value;                  //comando inv�lido pois tenta armazenar um float em um ponteiro para float.

    pf = aloha;                     //comando v�lido, armazena o endere�o da primeira posi��o do array no ponteiro pf.

    return 0;
}
