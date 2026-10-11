int sumOfSquares(int* a, int n) {
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        if(n % i == 0) 
        {
            sum = sum + a[i - 1] * a[i - 1];
        }
    }
    return sum;
}