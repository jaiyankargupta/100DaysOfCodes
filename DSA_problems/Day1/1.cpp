// question No : 3110. Score of a String

// codes:

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i =1; i<s.length(); i++){
            sum += abs(int(s[i]) - int(s[i-1]));
            

        }
        return sum;
    }
};


// space complexity: const
//time complexity: linear time because if we have to iterate the entire string till the length and if length is n; so time complexity is O(n)

//thanks : rustyn
