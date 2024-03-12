int main() {
    int numero;
    int somaDivisores = 0;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    if (somaDivisores == numero) {
        printf("%d é um número inteiro perfeito.\n", numero);
    } else {
        printf("%d NÃO é um número inteiro perfeito.\n", numero);
    }

    return 0;
}