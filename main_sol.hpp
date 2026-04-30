#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iterator>
using namespace std;

void makevector(vector<int> &vec, int N);
void sortEvenNumbers(vector<int> &vec);
int insertEvenNumber(vector<int> &vec, int evenvalue);
int deleteEvenNumber(vector<int> &vec, int value);
void printvector(vector<int> vec);

void makevector(vector<int> &vec, int N)
{
    static bool seeded = false;
    if (!seeded) { srand((unsigned)time(0)); seeded = true; }
    for (int i = 0; i < N; i++)
        vec.push_back(rand() % 20);
}

void sortEvenNumbers(vector<int> &vec)
{
    int n = (int)vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 != 0) continue;
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (vec[j] % 2 == 0 && vec[j] < vec[min_idx])
                min_idx = j;
        if (min_idx != i)
            swap(vec[i], vec[min_idx]);
    }
}

int insertEvenNumber(vector<int> &vec, int evenvalue)
{
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if (*it % 2 != 0) continue;
        if (evenvalue < *it)
        {
            int idx = (int)distance(vec.begin(), it);
            vec.insert(it, evenvalue);
            return idx;
        }
    }
    vec.push_back(evenvalue);
    return (int)vec.size() - 1;
}

int deleteEvenNumber(vector<int> &vec, int value)
{
    int count = 0;
    auto it = vec.begin();
    while (it != vec.end())
    {
        if (*it == value) { it = vec.erase(it); count++; }
        else ++it;
    }
    return count;
}

void printvector(vector<int> vec)
{
    for (int v : vec) cout << v << "\t";
    cout << endl;
}
