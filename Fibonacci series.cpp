#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int calls;
long long fib(int n) {
	calls++;
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	cout << "please enter n: ";
	cin >> n;
	auto start = steady_clock::now();
	long long result = fib(n);
	auto stop = steady_clock::now();
	auto us = duration_cast<microseconds> (stop - start).count();
	cout << "result = " << result << endl;
	cout << "time" << us << " us" << endl;
	cout << "calls = " << calls << endl;
	return 0;
}