
#include <iostream>
#include <vector>
using namespace std;
#include "aQuickSort.hpp"

template<class T> 
void lobstone::aQuickSort::printVector(vector<T> a) {
  for(int i = 0; i < a.size(); i++) {
    cout << i << ": " << a[i] << endl;
  }
  cout << endl;
}

template<class T>
void lobstone::aQuickSort::sort(vector<T> &a) {
  a[0] = a[1];
}
