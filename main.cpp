
#include <vector>
using namespace std;
#include "aQuickSort.hpp"
using namespace lobstone;

int main() {
  vector<char> a(4, 'a');
  a[0] = 'b';
  printVector(a);
  sort(a);
  printVector(a);

  return 0;
}
