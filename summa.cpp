#include "h.h"

void summa(int **arr, int m){
    int result = 0;
    for(int i = 0; i<=m; i++){
        result+=arr[i][i];
        std::cout<<"Summa glavnoi diagonali: "<<result<<std::endl;
    }
    std::cout<<"Summa glavnoi diagonali: "<<result<<std::endl;
    //почему-то у меня не выводится эта строка на компе, поэтому я положила её в цикл :/
    // но я понимаю, что в его нужно ставить после цикла
}