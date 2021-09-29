#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k = 1, N;
	double S;

	cout << "N="; cin >> N;
	S = 0;
	while (k <= N)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	}
	cout << S << endl;

	k = 1;
	S = 0;
	do {
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	} while (k <= N);
	cout << S << endl;

	S = 0;
	for (k = 1; k <= N; k++)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}
	cout << S << endl;

	S = 0;
	for (k = N; k >= 1; k--)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}
	cout << S;

	return 0;
}


