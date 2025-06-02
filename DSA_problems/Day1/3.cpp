// Question No: 217. Contains Duplicate

//codes

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us; 
        for(int i =0; i<nums.size(); i++){
          if(us.find(nums[i]) != us.end()) return true;
          us.insert(nums[i]);
        }
        return false;
    }
};

//time complexity: linear; because of we have store the all elements in new hashSet and also check the element is present or not?
// space complexity : linear; because we have to store the n elements (in case of duplicate is not present)

// thanks : rustyn
