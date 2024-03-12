int main() {

    int numero, contador = 5;
    srand(time(NULL));
    numero = 1 + rand() % 100;

    printf("Número sorteado! Tente acertar qual é o número.\n\n");
    int palpite;
    printf("Digite seu palpite: \n\n");
    scanf("%d", &palpite);

    while (palpite < 1 || palpite > 100) {
        printf("Número inválido! Digite um palpite entre 1 e 100.\n\n");
        printf("Digite seu palpite novamente: \n\n");
        scanf("%d", &palpite);
    }

    while (palpite != numero) {

        if (palpite < numero) {
            printf("\nSeu palpite foi muito baixo! Tente novamente.\n");
        } else if (palpite > numero) {
            printf("\nSeu palpite foi muito alto! Tente novamente.\n\n");
        }

        contador -= 1;

        if (contador < 1) {
            printf("Você excedeu o número máximo de tentativas. Número sorteado foi %d:", numero);
            break;

        else if (palpite == numero){
          printf("Você acertou! O número sorteado foi %d.\n", numero);
        }

        printf("Palpites restantes: %d\n", contador);
        printf("Digite seu palpite: \n");
        scanf("%d", &palpite);
    }

    return 0;
}