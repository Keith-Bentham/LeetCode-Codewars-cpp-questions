/**
 * Created by Keith Bentham
 */
#include <iostream>
#include <stack>

using namespace std;

class ValidParentheses {
public:
    bool validParenthesesCheck(string s) {
        stack<char> parentheStack;
        for (char validItems : s) {
            if (validItems == '(' || validItems == '{' || validItems == '[') {
                parentheStack.push(validItems);
            } else {
                if (parentheStack.empty()) return false;
                if (validItems == ')' && parentheStack.top() != '(') return false;
                if (validItems == '}' && parentheStack.top() != '{') return false;
                if (validItems == ']' && parentheStack.top() != '[') return false;
                parentheStack.pop();
            }
        }
        return parentheStack.empty();
    }
};

int main() {
    ValidParentheses vp;
    cout << "Is {[()} valid (false is 0 true is 1): " << vp.validParenthesesCheck("{[()}") << endl;
    cout << "Is {[()} valid (false is 0 true is 1): " << vp.validParenthesesCheck("()");
    return 0;
}

