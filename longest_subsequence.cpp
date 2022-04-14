#include <iostream>

using namespace std;

/*
Given an array of integers, find the longest decreasing consecutive subsequence.
*/


void print_vector(int v[], int begin_v, int end_v) {
	cout << "The longest decreasing consecutive subsequence is: ";
	for (int i = begin_v; i <= end_v; i++)
		cout << v[i] << " ";
	cout << endl;
}

void longest_subsequence(int v[100], int n) {
	int i, j, ct = 1, start, sem, ctmax = 0, startmax;

	for (i = 1; i < n; i++) {

		if (v[i] > v[i + 1]) {		
			start = i;
			ct++;
			sem = 1;

			j = i + 1;
			while (j < n && sem != 0) {
				if (v[j] > v[j + 1])		
					ct++;
				else {
					sem = 0;
					i = j - 1;		
				}
				j++;
			}

			if (ct > ctmax) {		
				ctmax = ct;
				startmax = start;
			}

			ct = 1;		
		}
	}

	print_vector(v, startmax , startmax + ctmax - 1);
}


