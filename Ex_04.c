int main(){

  int numero;
  printf("Escreva um número inteiro: ");
  scanf("%d", &numero);

  // Imprime os divisores do número
  printf("Os divisores de %d são: ", numero);

  for (int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        printf("%d ", i);
        }
    }

  return 0;
}