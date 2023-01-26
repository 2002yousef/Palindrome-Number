#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x); //converts integer to string to be able to compare left and right sides
        int n = number.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (number[i] != number[n - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution r;
    bool result = r.isPalindrome(0); //insert test cases here
    cout << result;
    
    return 0;
}