#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
int deleteone(vector<int> &, int);
int deleteone(vector<int> &vec, int usernum)
{
}
void makevector(vector<int> &vec, int size)
{
	for (int i = 0; i < size; i++)
		vec.push_back(rand() % 5);
}
void printvector(vector<int> vec)
{
	for (int v : vec)
		cout << v << "\t";
	cout << endl;
}