//
// Created by Keith Bentham
//
#include <string>
#include <map>
#include <iostream>

class RansomNote {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map(26);
        for (int i = 0; i < magazine.size(); ++i)
            ++map[magazine[i]];
        for (int j = 0; j < ransomNote.size(); ++j)
            if (--map[ransomNote[j]] < 0)
                return false;
        return true;
    }
};

int main() {
    RansomNote rn;
    cout << "Can the ransom note be used with the magazine aa: " << rn.canConstruct("aa", "aaab");
}