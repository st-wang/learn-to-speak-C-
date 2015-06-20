/*Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, 
so the function should return 3.*/

/*run time: 4ms*/


int hammingWeight(uint32_t n) {
    int num = 0;
    uint32_t devide = n;
    //uint32_t residu;
    do {
        if (devide % 2 == 1) {
            ++num;
        }
        devide = devide / 2;
    }while (devide != 0);
    
    return num;
}
