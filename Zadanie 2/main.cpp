#include <iostream>

using namespace std;

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    int i = 0;

    int j = 0;

    int k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = p + (r - p) / 2;

        mergeSort(arr,p, q);
        mergeSort(arr, q + 1, r);

        merge(arr, p, q, r);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int tab[]= {1,2,3,4,1,512,412,41,12,41,42,124,125,12,412,4,3,1235,31,512,3412,4};
    int n;
    n = 22;
    mergeSort(tab,0,n);
    printArray(tab,22);
    return 0;
}
