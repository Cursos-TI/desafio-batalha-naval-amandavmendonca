#include <stdio.h>

int main()
{

    bool encerra = false;
    char entrada[2];
    int aux = 4, aux2 = 1, aux3 = 6;
    int habilidadeCone[5][5] = {
        {0, 0, 5, 0, 0},
        {0, 5, 5, 5, 0},
        {5, 5, 5, 5, 5}};
    int habilidadeCruz[5][5] = {
        {0, 0, 5, 0, 0},
        {5, 5, 5, 5, 5},
        {0, 0, 5, 0, 0}};
    int habilidadeOcta[5][5] = {
        {0, 0, 5, 0, 0},
        {0, 5, 5, 5, 0},
        {0, 0, 5, 0, 0}};
    int tabuleiro[11][11] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {4, 0, 3, 0, 3, 0, 0, 3, 0, 0, 0},
        {5, 0, 0, 3, 0, 0, 3, 0, 0, 0, 0},
        {6, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0},
        {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0}

    };

    for (int x = 0; x < 11; x++)
    {
        for (int y = 0; y < 11; y++)
        {
            printf(" %i ", tabuleiro[x][y]);
        }
        printf("\n");
    }


    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            //    if(tabuleiro[x + aux][y + aux] == 0){
            //          tabuleiro[x + aux][y + aux] = habilidadeCone[x][y];
            //        } else if(tabuleiro[x + aux][y + aux] == 5 || tabuleiro[x + aux][y + aux] == 3) {
            //              tabuleiro[x + aux][y + aux] = tabuleiro[x + aux][y + aux];
            //            }
            if (tabuleiro[x + aux][y + aux] != 5 || tabuleiro[x + aux][y + aux] == 3)
            {
                tabuleiro[x + aux][y + aux] = habilidadeCone[x][y];
            }
        }
    }

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            // if(habilidadeCruz[x + aux2][y + aux2] == 0 && tabuleiro[x + aux2][y + aux2] == 5){
            //      tabuleiro[x + aux2][y + aux2] = 5;
            //    } else {
            //      tabuleiro[x + aux2][y + aux2] = habilidadeCruz[x][y];
            //    }
            if (tabuleiro[x + aux2][y + aux2] != 5 || tabuleiro[x + aux2][y + aux2] == 3)
            {
                tabuleiro[x + aux2][y + aux2] = habilidadeCruz[x][y];
            }
        }
    }

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (tabuleiro[x + aux3][y + aux3] != 5 || tabuleiro[x + aux3][y + aux3] == 3)
            {
                tabuleiro[x + aux3][y + aux3] = habilidadeOcta[x][y];
            }
        }
    }

    for (int x = 0; x < 11; x++)
    {
        for (int y = 0; y < 11; y++)
        {
            printf(" %i ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    return 0;
}