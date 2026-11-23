class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        char a;

        for (char ch : s) 
        {
            if (ch == '{' || ch == '[' || ch == '(') {
                st.push(ch);
                continue;
            }
            if (!st.empty()) {
                if ((ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[') ||
                    (ch == ')' && st.top() == '(')) {
                    st.pop();
                }
                 else return false;// else st.push(ch); 
            }
            else return false;
        }
        if (st.empty()) {
            return true;
        }

        return false;
    }
};
