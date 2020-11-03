#include "InsertionSort.h"
#include "HeapSort.h"
#include "MergeSort.h"

using namespace std;

int main() {

    int tab[]= {9,8,7,6,5,4,3,2,1};
    InsertionSort a(9,tab);
    a.print();
    a.sort();
    a.print();
    MergeSort b(9,tab);
    b.sort(tab,0,8);
    b.print();
    HeapSort c(9,tab);
    c.sort();
    c.print();

    return 0;
}
