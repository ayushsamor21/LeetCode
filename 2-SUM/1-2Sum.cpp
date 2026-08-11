#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(j);

                    return result;
                }
            }
        }

        vector<int> empty;
        return empty;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    Solution solution;

    vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution" << endl;
    }

    return 0;
}