#include "h.h"

int main() {

    std::cout<<"Vvedite kolichestvo strok: "<<std::endl;
    int m;
    std::cin >> m;

    std::cout << "Vvedite kolichestvo stolbikov: ";
    int n;
    std::cin >> n;

    int **arr = new int*[m];
    for (int i(0); i < m; i++)
        arr[i] = new int[n];

    zapolnenie(arr, m, n);
    vyvod(arr, m, n);
    summa(arr, m);


    for (int i(0); i < m; i++)
        delete arr[i];
    delete arr;

    return 0;
}