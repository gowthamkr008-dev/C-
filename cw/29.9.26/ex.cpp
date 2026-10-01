#include<iostream>
#include<vector>
using namespace std;

#if 0
/* it is like a dynamic array   vector is a dynamic array */
int main(){
  vector <int> v;
  vector <int>::iterator it;
  v.push_back(5); //insert the element
  while (v.back()>0){
    v.push_back(v.back()-1);
  }

  for( it = v.begin();it != v.end();it++){
    cout <<*it<<" ";
  }
  cout <<endl;
  for(int i =0;i<v.size();++i){
    cout << v.at(i)<<' ';
  }
  cout <<endl;
  while(!v.empty()){
    cout << v.back()<<' ';
    v.pop_back();
  }
  cout <<endl;



  return 0;
}

#endif


#if 0
#include <list>
using namespace std;
int main() {
  list <int> LI;
  list <int>::iterator it; //inserts elements at end of list
  LI.push_back(4);
  LI.push_back(5); //inserts elements at beginning of list
  LI.push_front(3);
  LI.push_front(5); //returns reference to first element of list
  it = LI.begin(); //inserts 1 before first element of list
  LI.insert(it,1);
  cout<<"All elements of List LI are: " <<endl;
  for(it = LI.begin();it!=LI.end();it++) {
    cout<<*it<<" ";
  }
  cout<<endl;
  LI.reverse();
  cout<<"All elements of List LI are after reversing: " <<endl;
  for(it = LI.begin();it!=LI.end();it++) {
    cout<<*it<<" ";
  }
  cout<<endl; //removes all occurences of 5 from list
  LI.remove(5);
  cout<<"Elements after removing all occurence of 5 from List"<<endl;
  for(it = LI.begin();it!=LI.end();it++) {
    cout<<*it<<" ";
  }
  
  cout<<endl; //removes last element from list
  LI.pop_back(); //removes first element from list
  LI.pop_front();
  return 0;
}
#endif

#if 0
/* pair function */
#include <utility>
using namespace std;
int main() {
  pair <int, char> p; //default
  pair <int, char> p1(2, 'b'); //initialize the value
  p = make_pair(1, 'a'); //initialize a value use function

  
  cout << p.first << ' ' << p.second << endl;//access the element first and second use p.first p.second
  cout << p1.first << ' ' << p1.second << endl;
  
  return 0;
}
#endif

#if 0

/* set elements*/
#include <set>
using namespace std;
int main() {
  set <int> s;
  set <int>::iterator it;
  int A[] = {3, 5, 2, 1, 5, 4};//initialize a array
  for(int i = 0;i < 6;i++)
    s.insert(A[i]);//set the values
  for(it = s.begin();it != s.end();it++)
      cout << *it << ' '; cout << endl; // ptint the values
    return 0;
}
#endif

#if 0
#include<map>



int main(){
  map<char ,int > mp;
 mp['f'] = 8;
  mp['u'] = 1; 
  mp['r'] = 2;
   mp['p'] = 4;
  mp['q'] = 0;
  mp['m'] = 9;
   map<char ,int> ::iterator it;
   for (it = mp.begin();it != mp.end();it++){
    cout <<it->first<< " "<<it->second<<endl;
   }



  return 0;
}
#endif

#if 1
#include<map>



int main(){
  map<char ,int > mp;
 mp['f'] = 8;
  mp['u'] = 1; 
  mp['r'] = 2;
   mp['p'] = 4;
  mp['q'] = 0;
  mp['m'] = 9;
   map<char ,int> ::iterator it;
   for (it = mp.begin();it != mp.end();it++){
    cout <<it->first<< " "<<it->second<<endl;
   }
   mp.erase('m');
   cout<<endl<<endl;
   for (it = mp.begin();it != mp.end();it++){
    cout <<it->first<< " "<<it->second<<endl;
   }



  return 0;
}
#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif