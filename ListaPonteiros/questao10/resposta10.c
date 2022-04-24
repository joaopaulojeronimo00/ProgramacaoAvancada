int main (void){
    char x[4];
    short int y[4], i;
    float z[4];
    double w[4];

    for (i=0; i<4; i++)
    {
        printf("%X %X %X %X ", x+i, y+i, z+i, w+i);
        printf("\n");
    }
    return 0;
}
 // a resposta condiz com a questão 9, caso no int seja utilizado o short int. apenas int ocupa 4 bytes.
