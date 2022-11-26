class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> umap = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;

        for(char c : s){
            if(umap.find(c) == umap.end()){
                if(!st.empty() && st.top() == umap.at(c)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
