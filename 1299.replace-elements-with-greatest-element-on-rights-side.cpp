class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int temp = -1;
        for(int i = arr.size() - 1; i >= 0; i--){
            int newMax = max(temp, arr[i]);
            arr[i] = temp;
            temp = newMax;
        }
        return arr;
    }
};
