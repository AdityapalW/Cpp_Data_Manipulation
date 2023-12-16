#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Example data
    std::vector<int> numbers = {7, 2, 5, 1, 9, 3, 6};

    // Sorting the vector using std::sort
    std::sort(numbers.begin(), numbers.end());

    // Displaying sorted numbers
    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Finding minimum and maximum elements
    int minElement = *std::min_element(numbers.begin(), numbers.end());
    int maxElement = *std::max_element(numbers.begin(), numbers.end());

    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;

    // Searching for a specific element (e.g., 5)
    int key = 5;
    auto it = std::find(numbers.begin(), numbers.end(), key);
    if (it != numbers.end()) {
        std::cout << key << " found at index " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << key << " not found" << std::endl;
    }

    return 0;
}
