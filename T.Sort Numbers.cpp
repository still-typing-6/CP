#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int A,B,C;
  cin>>A>>B>>C;
  if(A<B && A < C){
    cout<<A<<endl;
    if (B>C){
      cout<<C<<endl;
      cout<<B<<endl;
    }else{
      cout<<B<<endl;
      cout<<C<<endl;
    }
  }else if(B<A && B <C){
    cout<<B<<endl;
    if (A>C){
      cout<<C<<endl;
      cout<<A<<endl;
    }else{
      cout<<A<<endl;
      cout<<C<<endl;
    }
  }else if (C<A && C < B){
    cout<<C<<endl;
    if (A>B){
      cout<<B<<endl;
      cout<<A<<endl;
    }else{
      cout<<A<<endl;
      cout<<B<<endl;
    }
  }
  cout<<""<<endl;
  cout<<A<<endl;
  cout<<B<<endl;
  cout<<C<<endl;
  return 0;
}
