#include "h.h"
void vyvod(int **arr, int m, int n){
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}