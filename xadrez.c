#include <stdio.

// Função principal do programa
int main() {
    // --- Simulação do movimento da Torre (usando for) ---
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    // Define o número de casas que a torre irá se mover
    int casasTorre = 5; 
    // Loop for para simular o movimento da torre
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Simulação do movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo (5 casas na diagonal para cima e a direita) ---\n");
    // Define o número de casas que o bispo irá se mover
    int casasBispo = 5;
    // Inicializa o contador para o loop while
    int contadorBispo = 0;
    // Loop while para simular o movimento do bispo
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Simulação do movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    // Define o número de casas que a rainha irá se mover
    int casasRainha = 8;
    // Inicializa o contador para o loop do-while
    int contadorRainha = 0;
    // Verifica se a rainha deve se mover para evitar impressão extra caso casasRainha seja 0
    if (casasRainha > 0) {
        // Loop do-while para simular o movimento da rainha
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
