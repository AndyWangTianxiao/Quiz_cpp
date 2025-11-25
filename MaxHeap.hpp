#ifndef MAX_HEAP_HPP
#define MAX_HEAP_HPP

#include <vector>
#include <optional>

class MaxHeap {
public:
    void Add(int value); // add method for exercise 2
    std::optional<int> RemoveMax();   // remove method for exercise 3
    const std::vector<int>& Data() const { return data_; }

private:
    std::vector<int> data_;
    void bubbleUp(int index);
    void bubbleDown(int index);
};

#endif // MAX_HEAP_HPP
