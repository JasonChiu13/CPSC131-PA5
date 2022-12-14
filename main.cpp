class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u_map;                  // creates an unordered map
        for (int i = 0; ; ++i) {                        // loop for each count of i
            auto it = u_map.find(target - nums[i]);     // - auto it becomes the first instant of a number that can subtract from target
            if (it != u_map.end()) {                    // - then if it isn't at the end of the map
                return vector<int> {i, it->second};     //   - returns a vector with i key and it value
            }
            u_map[nums[i]] = i;                         // inserts i into u_map at the nums vector value as a key
        }
    }
};
