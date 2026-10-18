class Solution {
public:
    double power(double x, long long n) {
        if (n == 0)
            return 1.0;

        double half = power(x, n / 2);
        double result = half * half;

        if (n % 2 != 0)
            result *= x;

        return result;
    }

    double myPow(double x, int n) {
        long long p = n;

        if (p < 0)
            return 1.0 / power(x, -p);

        return power(x, p);
    }
};