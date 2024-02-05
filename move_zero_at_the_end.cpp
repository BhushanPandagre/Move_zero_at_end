#include <iostream>
#include <vector>
using namespace std;

void zeroend(vector<int>& nums) {
    int nZeroIndex = 0;

    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            // Move non-zero elements to the front
            nums[nZeroIndex] = nums[i];
            nZeroIndex++;
        }
    }

    // Fill the remaining elements with zeros
    while (nZeroIndex < nums.size()) {
        nums[nZeroIndex] = 0;
        nZeroIndex++;
    }
}

int main() {
    // Example usage
    vector<int> nums = {0, 1, 0, 3, 12, 0, 5};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout <<endl;

    // Move zeros to the end
    zeroend(nums);

    cout << "Array after moving zeros to the end: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}
