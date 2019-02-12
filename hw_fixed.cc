/** \file */
#include <iostream>
#include <vector>
#include <cmath>

/**
\brief This function calculates the standard deviation from a given set of numbers
\param a - This is provided set of numbers given through an array
\param n - This is the size of the array
\return This function returns the standard deviation of type double
*/
double deviation( int* a, int n )
{
	int sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	}
	double mean = sum;
	mean /= n;
	double stddev = 0.0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean);
	}
	stddev /= n-1;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
