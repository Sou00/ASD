

#ifndef ASD_SORTOWANIE_HEAPSORT_H
#define ASD_SORTOWANIE_HEAPSORT_H


class HeapSort {
    public:
    int* a = new int [0];
    int length = 0;

    public:
    HeapSort(int arr[],int n);
    void heapify(int arr[], int n, int i);
    void heapSort();
    void BuildHeap(int arr[],int n);
    void print();
};


#endif //ASD_SORTOWANIE_HEAPSORT_H
