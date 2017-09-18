//
// Created by Keith Bentham
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RelativeRanks {
public:
    vector<string> findRelativeRanks(vector<int> &nums) {
        const int size = nums.size();
        if (size == 0) return {};
        std::vector<std::pair<int, int>> elements;
        elements.reserve(size);
        for (int i = 0; i < size; i++) {
            elements.push_back(std::make_pair(i, nums[i]));
        }
        std::sort(elements.begin(), elements.end(),
                  [](const pair<int, int> &p1, const pair<int, int> &p2) {
                      return p1.second > p2.second;
                  });
        vector<string> res(size, "");
        res[elements[0].first] = "Gold Medal";
        if (size > 1) {
            res[elements[1].first] = "Silver Medal";
        }
        if (size > 2) {
            res[elements[2].first] = "Bronze Medal";
        }
        for (int i = 3; i < size; i++) {
            res[elements[i].first] = std::to_string(i + 1);
        }
        return res;
    }
};
