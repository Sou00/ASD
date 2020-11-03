

#ifndef ASD_SORTOWANIE_INSERTIONSORT_H
#define ASD_SORTOWANIE_INSERTIONSORT_H


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


#endif //ASD_SORTOWANIE_INSERTIONSORT_H
