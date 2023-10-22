#include "main.hpp"

int main()
{
	int size = 10;
	int usernum, result;
	srand(time(0));

	// Test 1
	vector<int> numbers1 = {2, 1, 4, 4, 0, 4, 3, 3, 4, 0};
	cout << "The original vector " << endl;
	printvector(numbers1);

	usernum = 4;
	result = deleteone(numbers1, usernum);
	cout << "Return value for deleting count " << result << endl; // It should be 4
	printvector(numbers1);

	usernum = 0;
	result = deleteone(numbers1, usernum);
	cout << "Return value for deleting count " << result << endl; // 2
	printvector(numbers1);

	// Test 2
	vector<int> numbers2;
	makevector(numbers2, size);
	cout << "The original vector " << endl;
	printvector(numbers2);

	usernum = 2;
	result = deleteone(numbers2, usernum);
	cout << "Return value for deleting count " << result << endl;
	printvector(numbers2);
}