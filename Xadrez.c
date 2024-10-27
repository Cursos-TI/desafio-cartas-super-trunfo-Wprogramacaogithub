
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_CARTAS 20
#define NUM_JOGADORES 2

typedef struct {
    char nome[50];
    int velocidade;
    int aceleracao;
    int potencia;
} Carta;

// Função para criar cartas
Carta criarCarta(char *nome, int velocidade, int aceleracao, int potencia) {
    Carta carta;
    strcpy(carta.nome, nome);
    carta.velocidade = velocidade;
    carta.aceleracao = aceleracao;
    carta.potencia = potencia;
    return carta;
}

// Função para imprimir carta
void imprimirCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Velocidade: %d\n", carta.velocidade);
    printf("Aceleração: %d\n", carta.aceleracao);
    printf("Potência: %d\n\n", carta.potencia);
}

// Função para jogar
void jogar(Carta carta1, Carta carta2) {
    printf("Carta 1:\n");
    imprimirCarta(carta1);
    printf("Carta 2:\n");
    imprimirCarta(carta2);

    // Verificar vencedor
    if (carta1.velocidade > carta2.velocidade) {
        printf("Vencedor: Carta 1\n\n");
    } else if (carta2.velocidade > carta1.velocidade) {
        printf("Vencedor: Carta 2\n\n");
    } else {
        // Empate, verificar aceleracao
        if (carta1.aceleracao > carta2.aceleracao) {
            printf("Vencedor: Carta 1\n\n");
        } else if (carta2.aceleracao > carta1.aceleracao) {
            printf("Vencedor: Carta 2\n\n");
        } else {
            // Empate, verificar potencia
            if (carta1.potencia > carta2.potencia) {
                printf("Vencedor: Carta 1\n\n");
            } else if (carta2.potencia > carta1.potencia) {
                printf("Vencedor: Carta 2\n\n");
            } else {
                printf("Empate!\n\n");
            }
        }
    }
}

int main() {
    srand(time(NULL)); 

    Carta cartas[NUM_CARTAS] = {
        criarCarta("Ferrari", 320, 3, 750),
        criarCarta("Lamborghini", 330, 2.8, 820),
        criarCarta("Porsche", 310, 3.2, 700),
        criarCarta("Bugatti", 350, 2.5, 900),
        criarCarta("Aston Martin", 300, 3.5, 650),
        criarCarta("McLaren", 325, 3.1, 800),
        criarCarta("Jaguar", 295, 3.8, 600),
        criarCarta("BMW", 290, 4.0, 550),
        criarCarta("Mercedes-Benz", 285, 4.2, 500),
        criarCarta("Audi", 280, 4.5, 450),
        criarCarta("Nissan", 275, 4.8, 400),
        criarCarta("Toyota", 270, 5.0, 350),
        criarCarta("Honda", 265, 5.2, 300),
        criarCarta("Ford", 260, 5.5, 250),
        criarCarta("Chevrolet", 255, 5.8, 200),
        criarCarta("Volkswagen", 250, 6.0, 150),
        criarCarta("Kia", 245, 6.2, 100),
        criarCarta("Hyundai", 240, 6.5, 50),
        criarCarta("Mazda", 235, 6.8, 0),
        criarCarta("Subaru", 230, 7.0, 0)
    };

    int jogador1 = 0;
    int jogador2 = NUM_CARTAS / 2;

    while (jogador1 < NUM_CARTAS / 2 && jogador2 < NUM_CARTAS) {
        printf("Jogador 1:\n");
        imprimirCarta(cartas[jogador1]);
        printf("Jogador 2:\n");

     return 0;

}   