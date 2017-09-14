//
// Created by Keith Bentham
//
#include <iostream>
#include <vector>

using namespace std;

/**
 * Created by Keith Bentham
 */

class LongestPalindromeSum {
public:
    int longestPalindrome(string s) {
        vector<int> m(256, 0);
        for (auto& c : s) m[c-'\0']++;
        int result = 0;
        for (auto& i : m){
            result += i%2 ? (result%2 ? i-1 : i) : i;

        }
        return result;
    }
};

int main() {
    LongestPalindromeSum lps;
    cout << "One longest palindrome that can be built is \"dccaccd\", whose length is: "
         << lps.longestPalindrome("abccccdd");
}
