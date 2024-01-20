#include <vector>
#include <unordered_map>

class Solution {
public:
std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndices;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (numIndices.find(complement) != numIndices.end()) {
                // Return the indices of the two numbers
                return {numIndices[complement], i};
            }

            // Add the current number and its index to the map
            numIndices[nums[i]] = i;
        }

        // No valid solution found
        return {};
    }
};