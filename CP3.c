#include <stdio.h>

int main() {
    int decisao, saque, saldo;

    saldo = 5000;
    decisao = 0;

    printf("Escolha uma das seguintes opcoes:\n1-Saque\n2-Deposito\n3-Sair\n");
    scanf("%d", &decisao);

    while(decisao == 1 || decisao == 2) {
        if (decisao == 1) {
            printf("=====SAQUE=====\nSaldo em conta: %dR$\n", saldo);
            printf("Digite o quanto deseja sacar: ");
            scanf("%d", &saque);
            if (saque > saldo || saque <= 0) {
                printf("\nErro: valor invalido\n");
                return;
            } else {
                printf("\nSacando %d...\n", saque);
                saldo = saldo - saque;
                printf("Saque realizado com sucesso!!\nSaldo atual %d", saldo);
            }

        }
        printf("Deseja realizar mais alguma transacao?\n");
        printf("1-Saque\n2-Deposito\n3-Sair\n");
        printf("OBRIHGADO POR ESCOLHER ATMFODASe");
    }

    return 0;

}
