/*Count the number of prime numbers less than a non-negative number, n.*/

/*run time: 92ms*/

int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }

    int *primes = new int[n + 1];
    std::memset(primes, 0, sizeof(int) * n);
    int ceil = std::floor((std::sqrt(double(n))));
    unsigned int numPrimes = 0;
    for (int i = 2; i <= ceil; ++i) {
        if (primes[i] != 1) {
            // i is NOT filtered away: it is a prime!
            ++numPrimes;
            int value = 2 * i;
            while (value < n) {
                primes[value] = 1;
                value += i;
            }
        } 
    }
    for (int i = ceil + 1; i < n; ++i) {
        if (primes[i] == 0) {
            ++numPrimes;
        }
    }
    return numPrimes;
}
