class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x ^ y;
        int count = 0;

        while (xr != 0) {
            xr &= (xr - 1);
            count++;
        }

        return count;
    }
};