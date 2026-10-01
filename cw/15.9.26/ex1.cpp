#include<iostream>
//cpp program 

#if 0
int main(){
  std::cout << "Hello World\n";
  // :: -> scope resolution operator 
  // << -> insertion operator
  // >> -> extraction operator
  // std -> name space like a library
  return 0;
}


#endif


#if 0
using namespace std;
int main(){
  cout << "Hello World\n";
  // :: -> scope resolution operator 
  // << -> insertion operator
  // >> -> extraction operator
  // std -> name space like a library
  return 0;
}
#endif



#if 1
using namespace std;
int main(){
  cout << "Hello World" << endl;
  //endl = is a manipulator doesn't take any memory
   // \n is a newline character it take a 1 byte 


  // :: -> scope resolution operator 
  // << -> insertion operator
  // >> -> extraction operator
  // std -> name space like a library
  return 0;
}
#endif