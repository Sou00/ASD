//
// Created by Sou on 03.11.2020.
//

#include "MergeSort.h"
#include <iostream>

using namespace std;

MergeSort::MergeSort(int length, int *b) {
    this->a=b;
    this->n=length;
}

void MergeSort::merge(int arr[], int p, int q, int r)
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

void MergeSort::sort (int arr[], int p, int r)
{
    if (p < r)
    {
        int q = p + (r - p) / 2;

        sort(arr,p, q);
        sort(arr, q + 1, r);

        merge(arr, p, q, r);
    }
}

void MergeSort::print()
{
    for(int i = 0; i < n ; i++)
        cout << a[i] << " ";
}