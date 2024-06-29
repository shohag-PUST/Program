/*#include <iostream>
using namespace std;
int bin_search (int arr[], int num, int tgt)
{
    int beg = 0, end = num - 1;
    while (beg <= end)
    {
        int mid = (beg + end) /2;
        if (tgt == arr[mid])
        {
            return mid;
        }
        else if (tgt < arr[mid])
        {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }
    return -1;
}
int main ()
{
    int n,i;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //int arr[] = { 5, 10, 15, 20, 25, 30, 37, 40};
    //int tgt = 25;
    int tgt;cin>>tgt;
    int num = sizeof (arr) / sizeof (arr[0]);
    int pos = bin_search (arr, num, tgt);
    if (pos != 1)
    {
        cout << " Element is found at position " << (pos + 1)<< endl;
    }
    else
    {
        cout << " Element is not found in the array" << endl;
    }
    return 0;
}*/


/*#include <iostream>
#include <vector>

using namespace std;

// Function to perform binary search
int binarySearch(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If target is not found in the array
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int index = binarySearch(arr, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
*/














#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int target) {
    int left = 1;
    int right = size;
    while (left <= right) {
        int mid = (left +right) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
/*bool isSorted(int arr[], int size) {
    for (int i = 1; i < size ; ++i) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}*/
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
    /*if (!isSorted(arr, size)) {
        cout << "Array is not sorted. Exiting." << endl;
        return 1;
    }*/
    sort(arr,arr+size);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int index = binarySearch(arr, size, target);
    if (index != -1)
        cout << "Element found at index: " << index+1 << endl;
    else
        cout << "Element not found in the array." << endl;
    return 0;
}

