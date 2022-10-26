#include <iostream>
#include <vector>
#include <random>
#include <numeric>		//std::inner_product

using namespace std;

void func1()
{
	long long sum = 0;
	for (unsigned i = 0; i < 1'000'000; i++)
		sum += i;

	cout << sum << endl;
}

void func2()
{
	long long sum = 0;
	for (unsigned i = 0; i < 1'000'000'000; ++i)
		sum += i;

	cout << sum << endl;
}

void run()
{
	func1();
	func2();
}

// chapter19_6 release모드에서 profiling해보기
int main()
{
	run();

	int* d = new int[10000];
	float* f = new float[100];

	delete[] d;
	delete[] f;

	return 0;
}