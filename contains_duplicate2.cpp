/*Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears 
at least twice in the array, and it should return false if every element is distinct.*/
/*run time: */


bool containsDuplicate(vector<int>& nums) {
    if (nums.size() == 0) {
        return false;
    }
    std::set<int> apperance;
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        apperance.insert(*i);
    }
    return nums.size() != apperance.size();
}
