class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                if (st.empty()) return false;
                if(ch == ')'){
                    char temp = st.top();
                    st.pop();
                    if(temp != '(') return false;
                }else if(ch == '}'){
                    char temp = st.top();
                    st.pop();
                    if(temp != '{') return false;
                }else if(ch == ']'){
                    char temp = st.top();
                    st.pop();
                    if(temp != '[') return false;
                }
            }
        }

        return st.size() ? false : true;
    }
};
