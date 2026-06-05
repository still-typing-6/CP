#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  long long int N,M;
  cin>>N>>M;
  long long int n1 = N % 10;
  long long int n2 = M % 10;
  cout<<n1+n2; 
  return 0;
}
