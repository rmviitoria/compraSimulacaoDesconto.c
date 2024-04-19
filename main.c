/******************************************************************************


Crie um programa que lê o preço de um determinado produto. 
Em seguida, simule a compra de X produtos (onde X deve ser solicitado para o usuário pelo teclado), 
imprimindo o valor total da compra com 2 casas decimais e com o símbolo de reais na frente do valor ("R$"). 
Caso a quantidade de produtos indicada seja negativa, não realize a conta e imprima uma mensagem de erro.

Altere o programa, 
considerando agora que os produtos possuem desconto de acordo com a quantidade que forem comprados. 
Os descontos são os seguintes:
comprando 3 ou 4 produtos, o desconto é de 10%
comprando entre 5 (inclusive) e 10 (inclusive) produtos, o desconto é de 15%
comprando mais do que 10 produtos, o desconto é de 20%
comprando menos do que 3 produtos, não há desconto

*******************************************************************************/
#include <stdio.h>

int main() {
    float preco_produto;
    int quantidade;
    float total;
    float desconto = 0.0; 

    printf("Digite o preço do produto: ");
    scanf("%f", &preco_produto);

    if (preco_produto < 0) {
        printf("Erro: O preço do produto não pode ser negativo.\n");
        return 1; 
    }

    printf("Digite a quantidade de produtos a serem comprados: ");
    scanf("%d", &quantidade);

    if (quantidade < 0) {
        printf("Erro: A quantidade de produtos não pode ser negativa.\n");
        return 1; 
    }

    total = preco_produto * quantidade;

    if (quantidade >= 3 && quantidade <= 4) {
        desconto = 0.10; // Desconto de 10%
    } else if (quantidade >= 5 && quantidade <= 10) {
        desconto = 0.15; // Desconto de 15%
    } else if (quantidade > 10) {
        desconto = 0.20; // Desconto de 20%
    }

    total -= total * desconto;

    printf("O valor total da compra é: R$%.2f\n", total);

    return 0; 
}
