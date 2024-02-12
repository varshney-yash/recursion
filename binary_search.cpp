#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binary_search(arr, mid + 1, high, target);
    } else {
        return binary_search(arr, low, mid - 1, target);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int found_at = binary_search(arr, 0, 8, 6);
    cout << found_at;
    return 0;
}
