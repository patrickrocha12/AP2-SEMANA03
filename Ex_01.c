int main(){

  int numero;
  srand(time(NULL));
  numero = 1 + rand()%100;

  printf("Número sorteado! Tente acertar qual é o número.\n");
  int palpite;
  printf("Seu palpite: \n");
  scanf("%d", &palpite);

  while(palpite < 1 || palpite > 100) {

    printf("Número inválido! Digite um palpite entre 1 e 100.\n");
    printf("Digite um palpite novamente: \n");
    scanf("%d", &palpite);

}
  if(palpite < numero){
      printf("Você chutou muito baixo! O valor correto é %d.\n", numero);
    }
    else{
    printf("Você chutou muito alto! O valor correto é %d\n.", numero);
  }


}