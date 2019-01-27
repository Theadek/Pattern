//https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1

#include <iostream>
using namespace std;

void pattern(int N)
{
	for (int i = 0; i < N; i++) { //how many rows
		for (int k = N; k > 0; k--){ //what number
			for (int j = i; j < N; j++) {//how many times
				cout << k;
			}
		}
		cout << "$";
	}
}

int main() {
	int T;//number of Tests
	cin >> T;
	int N;
	while (T > 0) {
		cin >> N;
		pattern(N);
		cout << endl;
		T--;
	}

	return 0;
}