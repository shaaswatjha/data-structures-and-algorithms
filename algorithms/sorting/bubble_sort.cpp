#include <iostream>
#include <optional>
#include <sstream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    return;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"4 7 9 -1 2\"\n";
        return 1;
    }

    std::stringstream convertArr{argv[1]};
    std::vector<int> arr;

    int value;
    while (convertArr >> value) {
        arr.push_back(value);
    }

    bubbleSort(arr);

    std::cout << "Sorted array: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];

        if (i != arr.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
