#include "MaxHeap.hpp"
#include <utility>

void MaxHeap::Add(int value) {
    data_.push_back(value);
    bubbleUp(static_cast<int>(data_.size()) - 1);
}

std::optional<int> MaxHeap::RemoveMax() {
    if (data_.empty()) {
        return std::nullopt;
    }

    int maxValue = data_.front();
    data_[0] = data_.back();
    data_.pop_back();
    if (!data_.empty()) {
        bubbleDown(0);
    }
    return maxValue;
}

// bubble up and bubble down as utility function 
void MaxHeap::bubbleUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (data_[index] <= data_[parent]) {
            break;
        }
        std::swap(data_[index], data_[parent]);
        index = parent;
    }
}

void MaxHeap::bubbleDown(int index) {
    int size = static_cast<int>(data_.size());
    while (true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < size && data_[left] > data_[largest]) {
            largest = left;
        }
        if (right < size && data_[right] > data_[largest]) {
            largest = right;
        }
        if (largest == index) {
            break;
        }
        std::swap(data_[index], data_[largest]);
        index = largest;
    }
}
