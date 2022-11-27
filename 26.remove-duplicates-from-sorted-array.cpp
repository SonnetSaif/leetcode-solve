class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    int j = 0; int res = 1;

    for ( int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
            res++;
        }
    }
        return res;
    }
};
