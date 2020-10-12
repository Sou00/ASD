#include <iostream>
#include "InsertionSort.h"

using namespace std;

InsertionSort::InsertionSort(int length, int *b) {
    this->a = b;
    this->n = length;
}

void InsertionSort::sort() {
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

void InsertionSort::print() {
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