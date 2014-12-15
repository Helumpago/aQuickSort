
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
#include "aQuickSort.hpp"
using namespace lobstone;

vector<int> createVector(int stop);

int main() {
  vector<int> a = createVector(5000000);
  //QuickSort::printVector(a);
  aQuickSort::sort(a);
  //aQuickSort::printVector(a);

  return 0;
}

vector<int> createVector(int stop) {
  vector<int> v;

  srand(time(NULL));

  for(int i = 0; i < stop; i++) {
    v.push_back(rand() % stop);
    //v.push_back(i);
    //v.push_back(stop - i);
  }

  return v;
}
