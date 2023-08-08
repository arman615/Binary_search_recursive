#include <iostream>
#include <vector>

int binarySearchRecursive(const std::vector<int>& vec, int target, int left, int right) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (vec[mid] == target) {
        return mid;
    } else if (vec[mid] < target) {
        return binarySearchRecursive(vec, target, mid + 1, right);
    } else {
        return binarySearchRecursive(vec, target, left, mid - 1);
    }
}

int main() {
    std::vector<int> sortedVec = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int target = 55;
    int result = binarySearchRecursive(sortedVec, target, 0, sortedVec.size() - 1);
    if (result != -1) {
        std::cout << "Target found at index: " << result << std::endl;
    } else {
        std::cout << "Target not found in the vector." << std::endl;
    }
}
