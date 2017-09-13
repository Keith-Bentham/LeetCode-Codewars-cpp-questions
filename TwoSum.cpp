/**
* Created by Keith Bentham
*/

#include <iostream>
#include <climits>
using namespace std;// namespace for std::cout/cin

class TwoSum{
public:// public available
    vector<int> getSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> res(2, 0);
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) {
                res[0] = hash[target - nums[i]], res[1] = i ;
                return res;
            }
            hash[nums[i]] = i ;
        }
        throw "No Solution found";
    }
};


