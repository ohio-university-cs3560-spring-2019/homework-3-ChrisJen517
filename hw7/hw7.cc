#include <iostream>
#include <cstdarg>
#include <cmath>
#include "hw7.h"

using namespace std;

double stddev(int n, ...){

	va_list args;
	va_start(args, n);
	int nums[n];
	for(int i = 0; i < n; i++){
	
		int num = va_arg(args, int);
		nums[i] = num;

	}

	double total = 0;

	for(int i = 0; i < n; i++){
		total += nums[i];
	}
	
	cout << "Total: " << total << "\n";

	double mean = total / n; 

	cout << "Mean: " << mean << "\n";

	double stddev = 0;

	for(size_t i = 0; i < n; i++){
		stddev = stddev + (nums[i] - mean) * (nums[i] - mean);
	}

	stddev /= n;

	if(stddev == 0)
		cout << "Sigma is zero" << endl;

	return sqrt(stddev);

	va_end(args);
}

	int main(){

	std::cout << "Standard deviation: \n" << stddev(4,12,24,19, 31) 
<< "\n";


	}
