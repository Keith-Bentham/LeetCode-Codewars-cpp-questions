//
// Created by Keith Bentham
//
#include <iostream>
using namespace std;

class StringReversal {
public:
    string reverseString(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            swap(s[i++], s[j--]);
        }
        return s;
    }
};

int main() {
    StringReversal rs;
    cout << "Reverse string of Planet is: " << rs.reverseString("Planet");
    return 0;
}