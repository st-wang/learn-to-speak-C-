/*Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1
*/

/*run time : 4ms*/


bool isHappy(int n) {
    ++count;
    std::vector<int> tmp;
    int devide = n;
    do {
        tmp.push_back(devide % 10);
        devide /= 10;
    }while(devide > 0);
    
    int sum = 0;
    if (tmp.size() == 1) {
        sum = (*tmp.begin()) * (*tmp.begin());
    }
    else {
        for (auto i = tmp.begin(); i != tmp.end(); ++i) {
            sum += (*i) * (*i);
        }
    }
    if (sum == 1) {
        return true;
    }
    else {
        if (count == 10) {
            return false;
        }
        return isHappy(sum);
    }
}
