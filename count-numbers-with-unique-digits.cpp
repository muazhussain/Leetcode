// Link: https://leetcode.com/problems/count-numbers-with-unique-digits/description/

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) {
            return 1;
        }
        int count = 10;
        int availableDigit = 9;
        int uniqueDigit = 9;
        while(n > 1 && availableDigit > 0) {
            uniqueDigit *= availableDigit;
            count += uniqueDigit;
            availableDigit--;
            n--;
        }
        return count;
    }
};
