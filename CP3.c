#include <stdio.h>

int saque(int saldo) {
    int valor;  

    printf("===== SAQUE =====\n");
    printf("Saldo em conta: R$ %d\n", saldo);
    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor > saldo || valor <= 0) {
        printf("\nErro: valor invalido.\n");
    } else {
        saldo = saldo - valor;
        printf("Saque realizado com sucesso\n");
        printf("Saldo atual: R$ %d\n", saldo);
    }

    return saldo;
}

int deposito(int saldo) {
    int valor;

    printf("===== DEPOSITO =====\n");
    printf("Saldo em conta: R$ %d\n", saldo);
    printf("Digite o valor do deposito: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("\nErro: valor invalido.\n");
    } else {
        saldo = saldo + valor;
        printf("\nDepositando R$ %d...\n", valor);
        printf("Deposito realizado com sucesso\n");
        printf("Saldo atual: R$ %d\n", saldo);
    }

    return saldo;
}

int main() {
    int decisao;
    int saldo = 5000;

    do {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1 - Saque\n");
        printf("2 - Deposito\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &decisao);

        if (decisao == 1) {
            saldo = saque(saldo);
        }
        else if (decisao == 2) {
            saldo = deposito(saldo);
        }
        else if (decisao == 3) {
            printf("\nFECHANDO ATM.\n");
        }
        else {
            printf("\nOpcao invalida\n");
        }

    } while (decisao != 3);

    return 0;
}
