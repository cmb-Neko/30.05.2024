#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int tda[100][100], xaxis, yaxis, minel, maxel;
	cout << "Enter length: ";
	cin >> yaxis;
	cout << "Enter length: ";
	cin >> xaxis;
	for (int y = 0; y < yaxis; y++) {
		for (int x = 0; x < xaxis; x++) {
			tda[y][x] = rand() % 10;
		}
	}

	for (int y = 0; y < yaxis; y++) {
		for (int x = 0; x < xaxis; x++) {
			cout << tda[y][x] << " ";
		}
		cout << endl;
	}



	minel = tda[0][0];
	maxel = tda[0][0];
	double sum = 0;
	
	for (int y = 0; y < yaxis; y++) {
		for (int x = 0; x < xaxis; x++) {
			if (tda[y][x] < minel) {
				minel = tda[y][x];
			}
			if (tda[y][x] > maxel) {
				maxel = tda[y][x];
			}
			sum += tda[y][x];
		}
	}
	cout << "sum = " << sum << endl;
	cout << "Avg = " << sum / (yaxis * xaxis) << endl;
	cout << "Smallest element: " << minel << endl;
	cout << "Biggest element: " << maxel << endl;
}