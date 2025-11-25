===== README.md =====
---
title: C++ Practice Exercises
description: Quicksort and Max-Heap samples with build instructions.
---

# C++ Practice Exercises

A small C++ project containing three separate exercises:

1. **Quicksort implementation**  
2. **Max-Heap with `Add()`**  
3. **Max-Heap extension with `RemoveMax()`**

Each exercise is split across header (`.hpp`), implementation (`.cpp`), and `main.cpp` for testing.

---

## File Layout


project-root/
├── QuickSort.hpp
├── QuickSort.cpp
├── MaxHeap.hpp
├── MaxHeap.cpp
└── main.cpp

scheme

---

## Quick Overview

### Exercise 1 – Quicksort
- `quickSort(std::vector<int>&)` sorts a vector in-place.
- Standard recursive quicksort with Lomuto partitioning.

### Exercise 2 – Max-Heap with `Add()`
- `MaxHeap::Add(int value)` inserts a value and restores heap order via `bubbleUp`.

### Exercise 3 (Bonus) – Max-Heap with `RemoveMax()`
- Adds `std::optional<int> RemoveMax()` plus `bubbleDown` to maintain heap order after removal.

---

## Building & Running

### Prerequisites
- A C++17-compliant compiler (e.g., g++, clang++, MSVC).
- Standard library headers (vector, optional, etc.).

### Compile (Linux/macOS)
```bash
g++ -std=c++17 main.cpp QuickSort.cpp MaxHeap.cpp -o exercises

Compile (Windows with MinGW)
powershell
g++ -std=c++17 main.cpp QuickSort.cpp MaxHeap.cpp -o exercises.exe

Compile (MSVC via Developer Command Prompt)
bat
cl /std:c++17 main.cpp QuickSort.cpp MaxHeap.cpp

Run
bash
./exercises        # Linux/macOS
.\exercises.exe    # Windows
