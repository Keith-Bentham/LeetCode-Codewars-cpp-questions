//
// Created by Keith Bentham
//
class RotateArray {
public:
    void rotate(vector<int> &nums, int k) {
        if (nums == NULL || nums.size < 2) {
            return;
        }
        k %= nums.size;
        reverse(nums, 0, nums.size - k - 1);
        reverse(nums, nums.size - k, nums.size - 1);
        reverse(nums, 0, nums.size - 1);
    }

    void reverse(vector<int> &nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};