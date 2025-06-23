#include <cmath>
class Solution {
public:
    bool isPowerOfFour(double n) {
        int i = 0;
        double res = pow(4, i);
        while (res <= n) {
            if (res == n) {
                return true;
            }
            i++;
            res = pow(4, i);
        }
        return false;
    }
};
