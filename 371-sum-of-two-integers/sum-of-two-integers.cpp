class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned int carry =
                (static_cast<unsigned int>(a) &
                 static_cast<unsigned int>(b)) << 1;

            a = a ^ b;
            b = static_cast<int>(carry);
        }

        return a;
    }
};