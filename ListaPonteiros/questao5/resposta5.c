int main(void){

  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;

  printf("contador/valor/valor/endereco/endereco");

  for(i = 0 ; i <= 4 ; i++){
  	printf("\ni = %d ",i);			//mostra o valor atual de i que está no for

  	printf("vet[%d] = %.1f ",i, vet[i]);	//mostra o valor armazenado na posição i do vetor na forma: ex.: vet[0] = 1.1

  	printf("*(f + %d) = %.1f ",i, *(f+i));	//mostra o mesmo que acima, mas com uma maneira diferente de percorrer o vetor na forma: ex.: *(f+0) = 1.1

  	printf("&vet[%d] = %X ",i, &vet[i]);	//mostra o endereço de memória de cada posição do vetor. ex.: &vet[0] = "endereço de vet[0]"

  	printf("(f + %d) = %X ",i, f+i);		//incrementa o ponteiro f.
  }
}
