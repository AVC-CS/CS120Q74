#include "main.hpp"

int main()
{
	// vector<int> numbers;
	int size = 10, result;
	int usernum;
	srand(time(0));
	// makevector(numbers, size);
	vector<int> numbers = {2, 1, 4, 4, 0, 4, 3, 3, 4, 0};
	sort(numbers.begin(), numbers.end());
	printvector(numbers);
	cout << "Enter the one integer value to Insert\n";
	cin >> usernum;
	insertone(numbers, usernum);
	printvector(numbers);

	cout << "Enter the one integer value to delete\n";
	cin >> usernum;
	result = deleteone(numbers, usernum);
	printvector(numbers);
}