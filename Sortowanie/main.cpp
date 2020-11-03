#include "InsertionSort.h"
#include "HeapSort.h"

using namespace std;

int main() {

    int tab[]= {9,8,7,6,5,4,3,2,1};
    HeapSort a(tab,9);
    a.heapSort();
    a.print();

    return 0;
}
