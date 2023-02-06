#include <iostream>
#include <algorithm>
void vyvod(int *arr, int n){
    std::cout << "Array: " << std::endl;
    for (int j = 0; j < n; j++) {
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
}
void minPodmassiv(int *arr) {
    int minSum = 0;
    int srednyaSumma = 0;
    for (int i = 0; i <= sizeof(arr); i++) {

        for (int j = i; j <= sizeof(arr); j++) {
            srednyaSumma += arr[j];
            if (srednyaSumma > minSum) {
                minSum += srednyaSumma;
            }
        }
    }
    std::cout<<"Summa: "<<minSum<<std::endl;
}


    int main() {
        std::cout << "Vvedite razmer massiva: " << std::endl;
        int n;
        std::cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            std::cin >> arr[i];

        vyvod(arr, n);
        minPodmassiv(arr);


        delete[] arr;
        return 0;
    }
