#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int recursive_alg(vector<int> &a, int left, int right)
{
    // write code here
}

int naive_alg(vector<int> &a, int left, int right)
{
    // write code here
}

int main()
{
    cout << "Enter a max array size: ";
    int max_s;
    cin >> max_s;
    cout << "Enter a max number of distinct values: ";
    int max_v;
    cin >> max_v;
    bool all_clear = true;
    int size;
    int vals;
    srand(time(NULL));
    while (all_clear) // generates a random array of size no greater than max_s
    {                 // and no more than max_v distinct values, and then applies both algorithms to the array
        do
        {
        size = rand() % max_s + 1;
        vals = rand() % max_v + 1;
        } while (size == 0 || vals == 0); // can't have arrays of size 0 or with 0 distinct elements
    
        vector<int> a(size);
        int is_maj_elt = rand() % 2;
        if (is_maj_elt) // then there should be a maj_elt
        {
            int is_maj_elt = rand() % vals;
            for (int i = 0; i < size; i++)
            {
                is_maj_elt = rand() % 3; // nonzero 2 out of 3 times - should give a majority element
                if(is_maj_elt)           // and yes, this is a three-sided coin ;)
                    a[i] = maj;
                else
                    a[i] = rand() % vals;
            }
        }
        else // then there needs not be a maj_elt
            for (int i = 0; i < size; i++)
                a[i] = rand() % vals;
        
        for (int i = 0; i < size; i++)
            cout << a[i] << ' ';
        cout << endl;
      
        int naive = naive_alg(a, 0, size);
        int recursive = recursive_alg(a, 0, size);
        cout << naive << ' ' << recursive << endl;
        all_clear = (naive == recursive);
    }
    cout << "Outputs differ" << endl;
}
