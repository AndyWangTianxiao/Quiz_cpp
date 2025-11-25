#include <iostream>
#include "QuickSort.hpp"
#include "MaxHeap.hpp"

void testQuickSort() {
    std::vector<int> nums = {9, 4, 7, 1, -2, 6}; // a simple case
    quickSort(nums);

    std::cout << "Sorted array: ";
    for (int n : nums) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
}

// add and remove to test maxheap
void testMaxHeapAdd() {
    MaxHeap heap;
    heap.Add(10);
    heap.Add(4);
    heap.Add(15);
    heap.Add(7);

    std::cout << "Heap after Add(): ";
    for (int v : heap.Data()) {
        std::cout << v << ' ';
    }
    std::cout << '\n';
}

void testMaxHeapRemove() {
    MaxHeap heap;
    heap.Add(20);
    heap.Add(5);
    heap.Add(17);
    heap.Add(3);

    std::cout << "Removing elements: ";
    while (auto val = heap.RemoveMax()) {
        std::cout << *val << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::cout << "--- Exercise 1: QuickSort ---\n";
    testQuickSort();

    std::cout << "\n--- Exercise 2: MaxHeap Add ---\n";
    testMaxHeapAdd();

    std::cout << "\n--- Exercise 3: MaxHeap Remove ---\n";
    testMaxHeapRemove();

    return 0;
}
