//
// Created by Keith Bentham
//
#include <iostream>
#include <vector>

using namespace std;

class GenerateParentheses {
public:
    vector <string> generateParenthesis(int n) {
        vector <string> res;
        backtrack(res, "", n, 0);
        return res;
    }

    void backtrack(vector <string> &v, string str, int n, int m) {
        if (n == 0 && m == 0) {
            v.push_back(str);
            return;
        }
        if (m > 0) { backtrack(v, str + ")", n, m - 1); }
        if (n > 0) { backtrack(v, str + "(", n - 1, m + 1); }
    }
};