#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int num_vertices;

void limparGrafo() {
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            graph[i][j] = 0;
        }
    }
    printf("\nGrafo limpo com sucesso\n");
}

void imprimirMatriz() {
    printf("\nMatriz de Adjacencia\n");
    printf(" ");

    for (int i = 0; i < num_vertices; i++) {
        printf("%2d", i);
    }

    printf("\n");

    for (int i = 0; i < num_vertices; i++) {
        printf("%2d |", i);
        for (int j = 0; j < num_vertices; j++) {
            printf("%2d", graph[i][j]);
        }
        printf("\n");
    }
}

void modificaAresta() {
    int origem, destino, valor;

    printf("\nVertice de origem: ");
    scanf("%d", &origem);

    printf("\nVertice de destino: ");
    scanf("%d", &destino);

    if (origem < 0 || origem >= num_vertices || destino < 0 || destino >= num_vertices) {
        printf("Vertices invalidos\n");
        return;
    }

    printf("\n1- Adicionar aresta\n");
    printf("\n2- Remover aresta\n");
    printf("\nOpcao: ");
    scanf("%d", &valor);

    if (valor == 1) {
        graph[origem][destino] = 1;
        graph[destino][origem] = 1;
        printf("Aresta adicionada com sucesso\n");
    }
    else if (valor == 2) {
        graph[origem][destino] = 0;
        graph[destino][origem] = 0;
        printf("Aresta removida com sucesso\n");
    }
    else {
        printf("Opcao invalida\n");
    }
}

void calcularGrau() {
    int grau;

    printf("\nGRAU DOS VERTICES\n\n");

    for (int i = 0; i < num_vertices; i++) {
        grau = 0;

        for (int j = 0; j < num_vertices; j++) {
            grau += graph[i][j];
        }

        printf("Vertices %d -> Grau %d\n", i, grau);
    }
}

void listarAdjacencias() {
    printf("\nLISTA DE ADJACENCIAS\n");

    for (int i = 0; i < num_vertices; i++) {
        printf("%d: ", i);
        int vazio = 1;

        for (int j = 0; j < num_vertices; j++) {
            if (graph[i][j] == 1) {
                printf("%d ", j);
                vazio = 0;
            }
        }

        if (vazio == 1) {
            printf("Nenhum vizinho");
        }

        printf("\n");
    }
}

int main() {
    int opcao;

    printf("Quantidade de vertices: ");
    scanf("%d", &num_vertices);

    if (num_vertices < 0 || num_vertices > MAX_VERTICES) {
        printf("\nQuantidade de vertices invalida");
        return 1;
    }

    limparGrafo();

    do
    {
        printf("MENU DO GRAFO\n");
        printf("1- Limpar grafo\n");
        printf("2- Inserir/Remover aresta\n");
        printf("3- Mostrar matriz\n");
        printf("4- Mostrar graus\n");
        printf("5- Mostrar adjacencias\n");
        printf("6- Sair\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            limparGrafo();
            break;
        case 2:
            modificaAresta();
            break;
        case 3:
            imprimirMatriz();
            break;
        case 4:
            calcularGrau();
            break;
        case 5:
            listarAdjacencias();
            break;
        case 6:
            printf("\nFim do programa\n");
            break;
        default:
            printf("\nOpcao invalida\n");
            break;
        }

    } while (opcao != 6);
    return 0;
}