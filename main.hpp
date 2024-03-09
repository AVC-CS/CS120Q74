#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void sortEvenNumber(vector<int> &);
int insertEvenNumber(vector<int> &, int);
int deleteEvenNumber(vector<int> &, int);

void sortEvenNumber(vector<int> &vec)
{
	/***************************************************
	 * Code your program here
	 ***************************************************/
}
int insertEvenNumber(vector<int> &vec, int usernum)
{
	/***************************************************
	 * Code your program here
	 ***************************************************/
}
int deleteEvenNumber(vector<int> &vec, int usernum)
{
	/***************************************************
	 * Code your program here
	 ***************************************************/
}
void makevector(vector<int> &vec, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		vec.push_back(rand() % 20);
}
void printvector(vector<int> vec)
{
	for (int v : vec)
		cout << v << "\t";
	cout << endl;
}