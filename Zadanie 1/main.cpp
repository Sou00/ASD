#include "InsertionSort.h"

using namespace std;


int main() {
    int tab[]= {9,8,7,6,5,4,3,2,1};
    InsertionSort a(9,tab);
    a.print();
    a.sort();
    a.print();

    return 0;
}
