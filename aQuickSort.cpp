
#include <iostream>
#include <vector>
using namespace std;
#include "aQuickSort.hpp"

template<class T> 
void lobstone::printVector(vector<T> a) {
  for(int i = 0; i < a.size(); i++) {
    cout << i << ": " << a[i] << endl;
  }
}
