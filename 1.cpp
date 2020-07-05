#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, max, temp;
   for (i = 0; i < n - 1; i++) {
      max = i;
      for (j = i + 1; j < n; j++)
         if (a[j] > a[max])
            max = j;
      temp = a[i];
      a[i] = a[max];
      a[max] = temp;
   }
}
int main() {
   int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   cout<<"\nSorted array is: \n";
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
