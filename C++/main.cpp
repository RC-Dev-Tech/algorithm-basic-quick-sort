#include <iostream>

// 將數列分區，返回基準元素的位置.
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 選擇最後一個元素作為基準元素.
    int i = low - 1; // i 指向小於等於基準元素的位置.

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            // 將小於等於基準元素的元素交換到前面.
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }

    // 將基準元素放在正確的位置.
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// 快速排序的遞迴函數.
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // 獲取基準元素的位置.

        // 遞迴排序左半部分和右半部分.
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {50, 90, 70, 20, 10, 30, 40, 60, 80};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    std::cout << "original sequence: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 基本快速排序.
    quickSort(arr, 0, size - 1);

    // 排序後數列.
    std::cout << "original sequence: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
