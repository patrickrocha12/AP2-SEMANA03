int main() {

  int numero, contador = 1;
  srand(time(NULL));
  numero = 1 + rand() % 100;

  printf("Número sorteado! Tente acertar qual é o número.\n\n");
  int palpite;
  printf("Digite seu palpite: \n\n");
  scanf("%d", &palpite);

  while (palpite < 1 || palpite > 100) {
    printf("Número inválido! Digite um palpite entre 1 e 100.\n\n");
    printf("Digite seu palpite novamnete: \n\n");
    scanf("%d", &palpite);}
  
  while (palpite != numero) {
    
    if (palpite < numero) {
      printf("\nSeu palpite foi muito baixo! Tente novamente.\n\n");
      contador += 1;
      printf("Digite seu palpite: \n\n");
      scanf("%d", &palpite);
      printf("Número de tentativas: %d\n\n", contador);}
    
    
    else if (palpite > numero){
      printf("\n\nSeu palpite foi muito alto! Tente novamente.\n\n");
      contador += 1;
      printf("Digite seu palpite: \n\n");
      scanf("%d", &palpite);
      printf("Número de tentativas: %d\n\n", contador);}

  printf("Você acertou! O número sorteado foi %d.\n\n", numero);
                           }
}