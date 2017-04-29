class Solution {
	vector<long long> fib;
public:
    int Fibonacci(int n) {
    	fib.push_back(0);
    	fib.push_back(1);
    	for(int i = 2; i <= n; ++i)
    		fib.push_back(fib[i-1] + fib[i-2]);
    	return fib[n];
    }
};