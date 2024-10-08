// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("ex1", "[example]")
{
	int idx, length;
	int bidx, eidx;
	vector<int>::iterator it;

	// Test 1
	vector<int> numbers1 = {6, 7, 0, 4, 5, 2, 10, 1, 8, 2};
	cout << "The original vector " << endl;
	length = numbers1.size();
	printvector(numbers1);
	sortEvenNumber(numbers1);
	printvector(numbers1);
	REQUIRE(numbers1[0] == 0);
	REQUIRE(numbers1[2] == 2);
	REQUIRE(numbers1[3] == 2);
	REQUIRE(numbers1[5] == 4);
	REQUIRE(numbers1[6] == 6);
	REQUIRE(numbers1[8] == 8);
	REQUIRE(numbers1[9] == 10);

	// Insert 2
	it = find(numbers1.begin(), numbers1.end(), 2);
	bidx = distance(numbers1.begin(), it);
	it = find(numbers1.begin(), numbers1.end(), 6);
	eidx = distance(numbers1.begin(), it);

	idx = insertEvenNumber(numbers1, 2);
	cout << "Inserted index " << idx << endl;
	printvector(numbers1);
	REQUIRE(idx >= bidx);
	REQUIRE(idx < eidx);
	REQUIRE(numbers1.size() == length + 1);

	// Insert 12
	idx = insertEvenNumber(numbers1, 12);
	cout << "Inserted index " << idx << endl;
	printvector(numbers1);
	REQUIRE(idx == 11);
	REQUIRE(numbers1.size() == length + 2);

	// Delete 2
	idx = deleteEvenNumber(numbers1, 2);
	cout << "Deleted items " << idx << endl;
	printvector(numbers1);
	REQUIRE(idx == 3);
	REQUIRE(find(numbers1.begin(), numbers1.end(), 2) == numbers1.end());

	// Delete 12
	idx = deleteEvenNumber(numbers1, 12);
	cout << "Deleted items " << idx << endl;
	printvector(numbers1);
	REQUIRE(idx == 1);
	REQUIRE(find(numbers1.begin(), numbers1.end(), 12) == numbers1.end());
}

TEST_CASE("ex2", "[example]")
{
	int idx, length;
	int bidx, eidx;
	vector<int>::iterator it;

	// Test 2
	vector<int> numbers1;
	makevector(numbers1, 20);
	cout << "The original vector " << endl;
	length = numbers1.size();
	printvector(numbers1);
	sortEvenNumber(numbers1);
	printvector(numbers1);

	int flag = 1, prev = -1;
	for (int i = 0; i < numbers1.size(); i++)
	{
		if (numbers1[i] % 2 == 0)
		{
			if (prev > numbers1[i])
			{
				flag = 0;
				break;
			}
			prev = numbers1[i];
		}
	}
	REQUIRE(flag == 1);

	idx = insertEvenNumber(numbers1, 22);
	printvector(numbers1);
	REQUIRE(idx == 20);
	REQUIRE(numbers1.size() == length + 1);
}
