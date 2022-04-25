int main()
{
    float aloha[10];
    float coisas[10][5];
    float *pf;
    float value = 2.2;
    int i = 3;
    aloha[2] = value;               //comando válido, armazena em aloha[2] o valor de value.
    scanf("%f", &aloha);            //comando válido mas não realiza nenhuma operação em aloha, aparentemente
    // aloha = value;               //comando inválido, pois não especifica a posição de aloha em que value será colocado
    printf("%f", aloha);            //comando válido, mostra o valor da primeira posição em aloha.
    coisas[4][4] = aloha[3];        //comando válido, armazena em coisas[4][4] o valor que está em aloha[3]
    // coisas[5] = aloha;           //comando inválido pois não é possível armazenar aloha em coisas[5]
    // pf = value;                  //comando inválido pois tenta armazenar um float em um ponteiro para float.

    pf = aloha;                     //comando válido, armazena o endereço da primeira posição do array no ponteiro pf.

    return 0;
}
