
#ifndef MAIN_CPP_INSERTIONSORT_H
#define MAIN_CPP_INSERTIONSORT_H


class InsertionSort
{
public:
    int* a = new int [0];
    int n = 0;

public:
    InsertionSort(int length, int b[]);
    void sort();
    void print();
};


#endif //MAIN_CPP_INSERTIONSORT_H
