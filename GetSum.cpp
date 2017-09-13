//
// Created by Keith Bentham on 9/13/2017.
//

/**
 * Created by Keith Bentham
 * Get the sum of two integers without the use of + or -
 */

#include <iostream>
using namespace std;// namespace for std::cout/cin

class GetSum {
public:
    int getSum(int a, int b) {
        return b == 0 ? a : getSum(a ^ b, (a & b) << 1);
    }
    /**
     * if b is equal to 0 if its true return a recursive call to a to the power of b
     * otherwise return (a exclusive OR b) and left shift 1
     */
};

int main(){
    GetSum gs;// create constructor to use reverse method
    cout <<"Output without using - or +: " << gs.getSum(3, 4);
    return 0;
}

