#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int res = 0, n;
	vector<int> arr = {};
	srand(time(0));

	cout << "Enter quantity of numbers: ";
	cin >> n;
 
	cout << "\nRandomly generated numbers: \n";

	for (int i = 0; i < n; i++) {
		arr.push_back(rand() % 2000 - 1000);
		if (abs(arr[i] % 2) == 1)
			res += 1;

		cout << setw(4) << arr[i] << "\t";
		if (i % 4 == 3) cout << endl;
	}

	cout << "\n\033[32mThere are " << res << " odd numbers.\033[0m\n";
	return 0;
}