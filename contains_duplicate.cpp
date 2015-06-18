/*Given an array of integers and an integer k, find out whether there there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.*/
/*run time: 20ms*/


bool containsNearbyDuplicate(vector<int>& nums, int k) {
    if (k >= nums.size()) { 
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums.at(i) == nums.at(j)) {
                    return true;
                }
            }
        }
        return false;
    }
    else {
        for (int i = 0; i < nums.size() - k; ++i) {
            for (int j = i + 1; j < i + k + 1; ++j) {
                if (nums.at(i) == nums.at(j)) {
                    return true;
                }
            }
        }
        return false;
    }
}
