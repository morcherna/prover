#include "h.h"
void zapolnenie(int **arr, int m, int n){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 101 + 0;
        }
    }
}