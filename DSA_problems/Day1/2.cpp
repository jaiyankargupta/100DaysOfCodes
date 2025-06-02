// Question No : 1929. Concatenation of Array

// codes:

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      int lengthOfVectorNums =   nums.size();
      //create a vector with 2*lengthOfVectorNums

      vector<int> nums2(2*lengthOfVectorNums, 0);

      for(int i=0; i<lengthOfVectorNums; i++){
        nums2[i] = nums[i];
        nums2[i+lengthOfVectorNums] = nums[i];
      }

      return nums2; 

    }
};


//space complexity: linear; because it store the 2*n elements
// time complexity: linear; because it store the 2*n elements

//thanks : rustyn
