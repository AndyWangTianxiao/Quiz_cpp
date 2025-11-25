#include "QuickSort.hpp"
#include <utility>

static int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    // make those who smaller than pivot go to left by swapping
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

static void quickSortImpl(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high); // partition and sort each recursively
        quickSortImpl(arr, low, p - 1);
        quickSortImpl(arr, p + 1, high);
    }
}

void quickSort(std::vector<int>& arr) {
    if (!arr.empty()) {
        quickSortImpl(arr, 0, static_cast<int>(arr.size()) - 1);
    }
}
