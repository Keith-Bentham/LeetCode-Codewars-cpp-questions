/**
* Created by Keith Bentham
* leetcode.com/problems/reverse-integer/description/
* + * Reverse digits of an integer.
* Example1: x = 123, return 321
* Example2: x = -123, return -321
* Note:
* The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
*/

#include <iostream>
#include <climits>
using namespace std;// namespace for std::cout/cin

class ReverseInteger{
public:// public available
    int reverse(int x){
        long revInt = 0;// declare a 32 bit integer which will need to be long as we must consider overflow
        while(x != 0){// while x is not equal to 0 do the following
            revInt = revInt * 10 + (x % 10);//
            x /= 10;//x equals x divide by 10
        }
        return (revInt<INT_MIN || revInt>INT_MAX) ? 0 : (int) revInt;
        // if our value overflows by checking max value or by checking min value if true return 0 else
        //if false return (downcast) revInt from long to int as its what the method is expecting to get
        }
};

int main(){
    ReverseInteger ri;// create constructor to use reverse method
    cout <<"Reversed output: " << ri.reverse(12345);// output with an example given for x
    return 0;
}

