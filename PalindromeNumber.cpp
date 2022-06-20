//Kyle Tam
//Palindrome Number
/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){//from example 2, negative numbers aren't palindrome
            return false;
        }
        
        int reverse=0;
        int forward=x;
        int remainder=0;
        while(x!=0){  //reverse the number
            remainder=x%10;
            reverse=reverse*10+remainder;
            x/=10;
        }
        return !(reverse-forward);//if the numbers are the same difference should be 0
        
    }
};
