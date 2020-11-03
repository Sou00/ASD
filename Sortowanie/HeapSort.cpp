

#include "HeapSort.h"

#include <iostream>

using namespace std;

 HeapSort::HeapSort(int *arr, int n) {
    this->a=arr;
    this->length=n;
}

void HeapSort::heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void HeapSort::BuildHeap(int arr[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void HeapSort::heapSort()
{
    BuildHeap(a,length);
    for (int i=length-1; i>0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
void HeapSort::print()
{
    for (int i=0; i<length; ++i)
        cout << a[i] << " ";
    cout << "\n";
}
