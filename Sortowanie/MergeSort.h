

#ifndef ASD_SORTOWANIE_MERGESORT_H
#define ASD_SORTOWANIE_MERGESORT_H


class MergeSort {
public:
    int* a = new int [0];
    int n = 0;

public:
    MergeSort(int length, int b[]);
    void merge(int arr[], int p, int q, int r);
    void sort(int arr[],int p, int r);
    void print();

};


#endif //ASD_SORTOWANIE_MERGESORT_H
