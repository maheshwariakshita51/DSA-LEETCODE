class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } else if(st.size() == 0){
                     return false;
            }
            else if (x == ')' && st.top() == '(' || 
                     x == '}' && st.top() == '{' ||
                     x == ']' && st.top() == '[' ){
                        st.pop();
            }
            else if(st.size() !=0 && x==']' || x=='}' || x==')' ){
                return false;
            }
        }
        if(st.size() == 0)  return true;
        else return false;
    }
};