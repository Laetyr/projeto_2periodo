#include <stdio.h>

char tela_6(void) {
    char resposta;
    printf("\n");
    printf("###################################################################################################\n");
    printf("#                                            Orientações                                          #\n");
    printf("###################################################################################################\n");
    printf("# No menu clientes irá realizar o cadastro, encontrar contato e exlusão dos clientes.             #\n");
    printf("# No menu roupas e fantasias irá fazer o aluguel, ver os que foram alugados e por quanto tempo.   #\n");
    printf("# No menu locações encontrara os valores do aluguel e por quem foi alugado.                       #\n");
    printf("# No menu relatório está o historico dos aluguéis e a quantidade de vezes que cada cliente alugou.#\n");
    printf("# No Menu sobre, tem as descrições de cada fantasia ou roupa assim como as opções disponíveis.    #\n");
    printf("# No menu orientações descreve oque cada opção faz                                                #\n");
    printf("#                                       0 - Menu Principal                                        #\n");
    printf("###################################################################################################\n\n");
    printf("Escolha sua opcao: ");
    scanf("%c", &resposta);
    return resposta;
}