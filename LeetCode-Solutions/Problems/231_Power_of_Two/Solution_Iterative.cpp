#include <cmath>
class Solution {
public:
    bool isPowerOfTwo(double n) {
        int i = 0;
        double res = pow(2, i);
        while (res <= n) {
            if (res == n) {
                return true;
            }
            i++;
            res = pow(2, i);
        }
        return false;
    }
};
