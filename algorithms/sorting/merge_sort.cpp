#include <iostream>
#include <optional>
#include <sstream>
#include <vector>

void merge(std::vector<int> subarr, int left, int mid, int right) {
    std::vector<int> temp;

    int i = left;       // start of left half
    int j = mid + 1;    // start of right half

    while ((i <= mid) && (j <= right)) {
        if (subarr[i] <= subarr[j]) {
            temp.push_back(subarr[i]);
            ++i;
        } else {
            temp.push_back(subarr[j]);
            ++j;
        }
    }

    while (i <= mid) {
        temp.push_back(subarr[i]);
        ++i;
    }

    while (j <= mid) {
        temp.push_back(subarr[j]);
        ++j;
    }

    for (size_t k = 0; k <= temp.size(); ++k) {
        subarr[left + k] = temp[k];
    }
}

void mergeSortIterative(std::vector<int>& arr) {
    return;
}

void mergeSortRecursive(std::vector<int>& arr) {
    return;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"3 7 -9 8 0\"\n";
        return 1;
    }

    std::stringstream convertArr{argv[1]};
    std::vector<int> arr;

    int value;
    while (convertArr >> value) {
        arr.push_back(value);
    }
    std::vector<int> arr_02 = arr;

    mergeSortIterative(arr);

    std::cout << "Array sorted using iterative merge sort: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    mergeSortRecursive(arr_02);

    std::cout << "Array sorted using recursive merge sort: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
