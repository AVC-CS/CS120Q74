#include "main.hpp"

int main()
{
    vector<int> vec = {6, 7, 0, 4, 5, 2, 10, 1, 8, 2};
    cout << "original: "; printvector(vec);
    sortEvenNumbers(vec);
    cout << "after sortEvenNumbers: "; printvector(vec);
    int idx = insertEvenNumber(vec, 6);
    cout << "after insert 6 (at " << idx << "): "; printvector(vec);
    int n = deleteEvenNumber(vec, 2);
    cout << "after delete 2 (removed " << n << "): "; printvector(vec);
    return 0;
}
