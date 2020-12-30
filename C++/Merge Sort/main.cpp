#include <iostream>
using namespace std;
void merge(int left, int right, int mid, int arr[]) {
  int nL, nR, i, j, k;
  nL = mid - left + 1;
  nR = right - mid;
  int l[50], r[50];
  for (i = 0; i < nL; i++) {
    l[i] = arr[left + i];
  }
  for (j = 0; j < nR; j++) {
    r[j] = arr[mid + 1 + j];
  }
  i = 0;
  j = 0;
  k = left;
  while (i < nL && j < nR) {
    if (l[i] <= r[j]) {
      arr[k] = l[i];
      i++;
    } else {
      arr[k] = r[j];
      j++;
    }
    k++;
  }
  while (i < nL) {
    arr[k] = l[i];
    i++;
    k++;
  }
  while (j < nR) {
    arr[k] = r[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m;
    m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(l, r, m, arr);
  }
}
void printArray(int arr[], int n) {
  cout << "elements after sorting" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main(void) {
  int i, n, arr[50];
  cout << "enter the size of array (MAX.50)" << endl;
  cin >> n;
  cout << "enter the array elements" << endl;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  mergeSort(arr, 0, n - 1);
  cout << endl;
  printArray(arr, n);
  return 0;
}
