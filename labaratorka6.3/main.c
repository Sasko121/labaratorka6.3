#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������� ��� ��������� �������� ������
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // ���������� �������� ������

        // ����������, �� � �������� ������� �������
        if (arr[mid] == target) {
            return mid; // ��������� ������ ���������� ��������
        }

        // ���� �������� ������� ������ �� �������, ������ � ����� ��������
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else { // ������ ������ � ��� ��������
            right = mid - 1;
        }
    }

    return -1; // ���� ������� �� ��������
}

int main() {
    // ³����������� �����
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    // ��������� ������� �������� ������
    int result = binary_search(arr, size, target);

    // �������� ���������
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }
    else {
        printf("Element not found in the array.\n");
    }

    return 0;
}