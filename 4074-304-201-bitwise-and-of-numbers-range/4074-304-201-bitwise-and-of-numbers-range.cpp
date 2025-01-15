class Solution { 
public: 
    int rangeBitwiseAnd(int left, int right) { 
        //Keep shifting left and right until they become equal 
        int shiftCount = 0; 
        while (left < right) { 
            left >>= 1; 
            right >>= 1; 
            shiftCount++; 
        } 
        //Return the common prefix shifted back to the left 
        return left << shiftCount; 
    } 
};