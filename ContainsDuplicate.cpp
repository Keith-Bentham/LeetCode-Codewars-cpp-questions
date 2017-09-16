/**
 * Created by Keith Bentham
 */
#include <set>
#include <vector>

using namespace std;

class ContainsDuplicate {
public:
    bool containsDuplicate(vector<int> &nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};


