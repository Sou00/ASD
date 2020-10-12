#include "header.h"

using namespace std;

class InsertionSort
{
public:
    int* a;
    int n;

public:
    InsertionSort(int length, int b[])
    {
        this->a = b;
        this->n = length;
    }
    void sort()
    {
        int elem;
        for(int j = 1,i ;j < n; j++)
        {
            elem = a[j];
            i = j-1;
            while(i >= 0 && a[i] > elem)
            {
                a[i+1] = a[i];
                i--;
            }
            a[i+1] = elem;
        }
    }

    void print()
    {
        bool sorted = true;
        for(int i=0; i < n; i++)
        {
            if(i > 0)
            {
                if(a[i] < a[i-1])
                    sorted=false;
            }
            cout << a[i] <<" ";
        }
        cout << endl;
        if(sorted)
        {
            cout << "Tablica posortowana" << endl;
        }
        else cout << "Tablica nieposortowana" << endl;
    }
};

int main() {
    int tab[]= {9,8,7,6,5,4,3,2,1};
    InsertionSort a(9,tab);
    a.print();
    a.sort();
    a.print();

    return 0;
}
