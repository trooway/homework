// задание3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    int A[7][7] = {
        {2, 7, 12, 17, 22, 27, 32},
        {4, 9, 14, 19, 24, 29, 34},
        {3, 8, 13, 18, 23, 28, 33},
        {5 ,15, 20, 25, 30, 35, 40},
        {1, 6, 11, 16, 21, 26, 31},
        {0, 5, 10, 15, 20, 25, 30},
        {9, 4, 9, 14, 19, 24, 29}
    };

    int max_element = A[0][0];
    int min_element = A[0][0];
    int max_i = 0;
    int max_j = 0;
    int min_i = 0;
    int min_j = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (A[i][j] > max_element) {
                max_element = A[i][j];
                max_i = i;
                max_j = j;
            }
            if (A[i][j] < min_element) {
                min_element = A[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }


    int temp = A[max_i][max_j];
    A[max_i][max_j] = A[min_i][min_j];
    A[min_i][min_j] = temp;


    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}