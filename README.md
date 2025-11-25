# C++ Algorithms Quiz

A concise implementation of **Quicksort** and **MaxHeap** data structures for the practice exercises.

##  Project Overview

This project covers three specific exercises:

1.  **Quicksort**: Recursive in-place sorting algorithm.
2.  **MaxHeap (Insert)**: Implementation of `Add()` with `bubbleUp`.
3.  **MaxHeap (Delete)**: Implementation of `RemoveMax()` with `bubbleDown`.

##  File Structure

- **`main.cpp`**: Entry point containing test cases for all exercises.
- **`QuickSort.hpp/cpp`**: Quicksort logic.
- **`MaxHeap.hpp/cpp`**: MaxHeap class and operations.

##  Build & Run

Requires a **C++17** compliant compiler (e.g., `g++`, `clang++`).

### One-line Command (Compile & Run)
```bash
g++ -std=c++17 *.cpp -o app && ./app
