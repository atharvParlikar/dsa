#include <iostream>
#define arrsize(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void insertionSort(int array[], int size)
{
  for(int i = 0; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main()
{
  int test[4] = {1,7,3,9};
  insertionSort(test, arrsize(test));
  printarr(test, arrsize(test));
}
