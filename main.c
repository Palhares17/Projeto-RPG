#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variaveis
    int personagem; 
    char nome[30];
    int vida = 100;    

    printf("\n-----------------------------------------------\n");
    
    // Inicio
    printf("Qual eh seu nome bravo aventureiro.\n");
    scanf("%s", nome);

    printf("\nEscolha seu personagem: ");
    printf("\n");
    printf("1 - Barbaro / 2 - Arqueiro / 3 - Mago / 4 - Guerreiro\n");
    scanf("%d", &personagem);

    switch (personagem) {
        case 1: 
            printf("\nVoce selecionou o Barbaro.\n");
            break;
        case 2: 
            printf("\nVoce selecionou o Arqueiro.\n");
            break;
        case 3: 
            printf("\nVoce selecionou o Mago.\n");
            break;
        case 4: 
            printf("\nVoce selecionou o Guerreiro.\n");
            break;
        default:
            printf("\nVoce nao selecionou nenhum personagem.\n");
    }  
    printf("\n-----------------------------------------------\n");

    // Comeco da historia
    printf("Bem-vendo %s\n", nome);

    int caminhos;
    printf("Vamos comecar a sua aventura, voce tem 3 caminhos a percorrer.\n");
    printf("Voce pode percorrer para o oceano de Delfin, ir para a floresta densa de Orlof ou ir para o deserto de Thalis.\n");
    printf("\n1 - Oceano de Delfin / 2 - Floresta densa de Orlof / 3 - Deserto de Thalis\n");
    scanf("%d", &caminhos);
    char caminhoSelecionado[100];

    switch (caminhos){
        case 1:
            printf("Entao voce ira para o Oceano de Delfin.\nEntao, que a aventura comece.\n");
            caminhoSelecionado[100] = "Oceano de Delfin";
            break;
        case 2:
            printf("Entao voce ira para o Floresta densa de Orlof.\nEntao, que a aventura comece.\n");
            caminhoSelecionado[100] = "Floresta densa de Orlof";
            break;
        case 3:
            printf("Entao voce ira para o Deserto de Thalis.\nEntao, que a aventura comece.\n");
            caminhoSelecionado[100] = "Deserto de Thalis";
            break;
        
    }

    char escolha[30];

    printf("\n-----------------------------------------------\n");
    printf("\n-> Capitulo 1\n");

    Printf("Voce entrou no %s.\n", caminhoSelecionado);
    printf("Cuidado voce entrou no covil do Ogro targon.");
    printf("Voce vai lutar ou correr ?");
    scanf("%s", escolha);

    if (strcmp(escolha, "Lutar") == 0 || strcmp(escolha, "lutar") == 0) {
        printf("Voce vai para cima do ogro\n");
        int dano;
        int vidaOgro = 50, danoOgro;

        // COMEÇO DA LUTA 
        while(vidaOgro <= 0 || vida <= 0) {
            dano = rand() % 10;
            danoOgro = rand() % 10;

            printf("Você dá %d de dano\n", dano);
            printf("O dano do ogro eh de %d\n", danoOgro);
            
            vida -= danoOgro;
            vidaOgro -= dano;
        }

        printf("\nFinal da batalha!!!\n");

        if(vidaOgro <=0) {
            printf("Parabens voce derrotou o Ogro targon\n");
        } else {
            printf("Voce morreu, acontece!!!");
        }
    } 

    return 0;
} 