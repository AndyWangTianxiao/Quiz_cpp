---

## Quick Overview

### Exercise 1 – Quicksort
- `quickSort(std::vector<int>&)` sorts a vector in-place.
- Standard recursive quicksort with Lomuto partitioning (pivot = last element).

### Exercise 2 – Max-Heap with `Add()`
- `MaxHeap::Add(int value)` inserts a value and restores heap order via `bubbleUp`.

### Exercise 3 (Bonus) – Max-Heap with `RemoveMax()`
- Adds `std::optional<int> RemoveMax()` plus `bubbleDown` to maintain heap order after removal.

---

## Building & Running

### Prerequisites
- A C++17-compliant compiler (e.g., `g++`, `clang++`, MSVC).
- Standard library headers (vector, optional, etc.).

### Compile (Linux/macOS)
```bash
g++ -std=c++17 main.cpp QuickSort.cpp MaxHeap.cpp -o exercises
