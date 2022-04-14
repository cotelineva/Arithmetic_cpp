#include <iostream>

using namespace std;

/*Show the first n twin primes.*/


void primzahl_zwilling(int n) {
	int ct = 0, i = 1, sem_x, x, y, sem_y;

	/*
	I'm using the (6*i-1, 6*i+1) formula to calculate the twin primes, but this formula
	is skipping the first pair (3,5), so for that I'm using a special condition
	*/

	cout << "The first " << n << " twin primes are:" << endl;
	if (n == 1)
		cout << "(3,5)" << endl; 

	else {
		cout << "(3,5)" << endl; 
		ct++;

		while (ct != n) {

			//we check if x is a prime
			x = 6 * i - 1;
			sem_x = 1;
			for (int d = 2; d <= x / 2; d++)
				if (x % d == 0)
					sem_x = 0;

			//we check if y is a prime
			y = 6 * i + 1;
			sem_y = 1;
			for (int d = 2; d <= y / 2; d++)
				if (y % d == 0)
					sem_y = 0;

			/*
			when x and y are primes like (6*i-1, 6*i+1), then they are twin primes
			*/
			if (sem_x == 1 && sem_y == 1) {
				cout << "(" << x << "," << y << ")" << endl;
				ct++;
			}

			i++;
		}
	}
}
