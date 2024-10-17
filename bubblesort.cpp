#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 1};
    cout << "vector before: ";
    printVector(arr);

    bubbleSort(arr);

    cout << "vector after: ";
    printVector(arr);
}

// vector before: 4 2 6 8 1
// vector after: 1 2 4 6 8
