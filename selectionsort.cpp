#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 1};
    cout << "vector before: ";
    printVector(arr);

    selectionSort(arr);

    cout << "vector after: ";
    printVector(arr);
}
