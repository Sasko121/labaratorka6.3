#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Функція для виконання бінарного пошуку
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Обчислюємо середній індекс

        // Перевіряємо, чи є середній елемент шуканим
        if (arr[mid] == target) {
            return mid; // Повертаємо індекс знайденого елемента
        }

        // Якщо середній елемент менший за шуканий, шукаємо у правій половині
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else { // Інакше шукаємо у лівій половині
            right = mid - 1;
        }
    }

    return -1; // Якщо елемент не знайдено
}

int main() {
    // Відсортований масив
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Викликаємо функцію бінарного пошуку
    int result = binary_search(arr, size, target);

    // Виводимо результат
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }
    else {
        printf("Element not found in the array.\n");
    }

    return 0;
}