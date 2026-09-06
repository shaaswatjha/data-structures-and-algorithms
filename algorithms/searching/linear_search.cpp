#include <iostream>
#include <optional>
#include <sstream>
#include <vector>

std::optional<std::size_t> linearSearch(const std::vector<int>& arr, int target) {
    for (std::size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return static_cast<int>(i);
        }
    }
    return std::nullopt;
}        

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] <<  " \"1 2 3 4 5\" <target>\n";
        return 1;
    }

    std::stringstream convertArr{argv[1]};
    std::vector<int> arr{};
    
    int value;
    while (convertArr >> value) {
        arr.push_back(value);
    }
    
    std::stringstream convertTarget{argv[2]};
    int target{};

    if (!(convertTarget >> target)) {
        std::cerr << "Invalid target.\n";
        return 1;
    }

    auto position = linearSearch(arr, target);

    if (position) {
        std::cout << "Target found at index position " << *position << ".\n";
    } else {
        std::cout << "Target not found." << "\n";
    }

    return 0;
}
