#include <iostream>

void findTopTwo(int nums[], int size, int& firstMax, int& secondMax) {
    firstMax = secondMax = INT_MIN;
    
    for(int i = 0; i < size; ++i) {
        if(nums[i] > firstMax) {
            secondMax = firstMax;
            firstMax = nums[i];
        } else if(nums[i] > secondMax) {
            secondMax = nums[i];
        }
    }
}

int main() {
    int nums[] = {3, 4, 5, 1, 2, 8, 7, 6};
    int size = sizeof(nums) / sizeof(nums[0]);

    int firstMax, secondMax;
    findTopTwo(nums, size, firstMax, secondMax);
    
    std::cout << "First Max: " << firstMax << std::endl;
    std::cout << "Second Max: " << secondMax << std::endl;

    return 0;
}

