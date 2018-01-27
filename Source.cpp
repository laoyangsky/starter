﻿#include <stdio.h>
#include <math.h>
#define N 101

int min_func(float a[], int n)
{
	float min, step;
	int i;
	for (min = a[0], i = 1; i<n; i++)  //Start from a[0],then loop to find the minimal value
	if (min > a[i]) //if min is larger than a[i], then change a[i] to be the new min.
	{
		min = a[i];
		step = i;
	}

	return min;
}

int step_func(float a[], int n)
{
	float min, step;
	int i;
	for (min = a[0], i = 1; i<n; i++)  //Start from a[0],then loop to find the minimal value
	if (min > a[i]) //if min is larger than a[i], then change a[i] to be the new min.
	{
		min = a[i];
		step = i;
	}

	return step;
}
int main()
{
	float xx[N];
	float fun[N];
	float min, x_step;
	int i;

	for (i = 0; i < N; i++)
	{
		xx[i] = 0.0 + i*0.1;
		fun[i] = abs(pow(xx[i], 2) - 5 * pow(xx[i], 1) + 2.0 / 3.0);
	}
	min = min_func(fun, N);
	x_step = 0.0 + 0.1*step_func(fun, N);
	printf("0?=%f\n x_solution=%f\n", min, x_step);
	return 0;
}
