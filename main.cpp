#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <unordered_map>
//#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;



void Vector()
{


    cout<<"VECTOR : "<<endl<<endl;
    // create a vector to store int
    vector<int> vec;
    vector<int> vec2(5);
    vector<int> vec3(5, 10);       //   {10,10,10,10,10}
    int i;

    // display the original size of vec
   cout << "vector size = " << vec.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 5; i++) {
      vec.push_back(i);
   }

   // display extended size of vec
   cout << "extended vector size = " << vec.size() << endl;
   // access 5 values from the vector
   for(i = 0; i < 5; i++) {
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }

   // use iterator to access the values
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }

   for (auto x : vec)
        cout << "[" << x << "] ";



   cout << "Size : " << vec.size();
    cout << "\nCapacity : " << vec.capacity();
    cout << "\nMax_Size : " << vec.max_size();

    // resizes the vector size to 4
    vec.resize(4);





    // prints the vector size after resize()
    cout << "\nSize : " << vec.size();




    // checks if the vector is empty or not
    if (vec.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";



    // Shrinks the vector
    vec.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";

    cout<<endl;





    //sort the vector
    sort(vec.begin(),vec.end());





    //Binary search
    bool ispresent = binary_search(vec.begin(),vec.end(),4);
    if(ispresent){
        cout<<"The given number exists"<<endl;
    }
    else{
        cout<<"The given number doesn't exists"<<endl;
    }



    //Decreasing Order
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto itr:vec){
        cout<<itr<<" ";
    }

    cout<<endl;



    //lower bound and upper bound


    //LOWER BOUND : returns the index of the next smallest number just greater than or equal to that number.
    //UPPER BOUND : returns an iterator pointing to the first element in the range [first, last) that is greater than value, or last if no such element is found


    //The elements in the range shall already be sorted or at least partitioned with respect to val.



    auto it1 = lower_bound(vec.begin(),vec.end(),1);
    auto it2 = upper_bound(vec.begin(),vec.end(),1);
    cout << "lower_bound : "
         << *it1 << endl;
    cout << "upper_bound : "
         << *it2 << endl;



    cout<<endl<<endl<<endl;

}


void Set(){

    cout<<"SET: "<<endl<<endl;

    set<int> S;

    //inserting elements
    S.insert(1);
    S.insert(5);
    S.insert(4);
    S.insert(1);
    S.insert(2);
    S.insert(5);


    //Size
    cout<<S.size()<<endl;

    // use iterator to access the values
   set<int>::iterator s = S.begin();
   cout<<"elements in S :"<<endl;
   while( s != S.end()) {
      cout << "value of s = " << *s << endl;
      s++;
   }



    // assigning the elements from s1 to s2
    set <int> s2(S.begin(), S.end());


    //iterating the elements in s2
    cout<<"elements in s2 :";
    for(auto x:s2){
        cout<<'['<<x<<']'<<" ";
    }
    cout<<endl;



     // remove element with value 50 in s2
    int num;
    num = s2.erase(5);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed \n" ;

    cout<<"elements in s2 :";
    for(auto x:s2){
        cout<<'['<<x<<']'<<" ";
    }
    cout<<endl;



    //lower bound and upper bound for set s1
    cout << "s1.lower_bound(4) : "
         << *S.lower_bound(4) << endl;
    cout << "s1.upper_bound(4) : "
         << *S.upper_bound(4) << endl;

    //lower bound and upper bound for set s2
    cout << "s2.lower_bound(4) : "
         << *s2.lower_bound(4) << endl;
    cout << "s2.upper_bound(4) : "
         << *s2.upper_bound(4) << endl;


   //printing all the elements in reverse order

  set<int>::reverse_iterator it;
  for(it=S.rbegin();it!=S.rend();it++){
      cout<<'['<<*it<<']'<<" ";
  }
  cout<<endl;


  // checks if the set is empty or not
  if(S.empty()==false){
      cout<<"Set is not empty"<<endl;
  }
  else{
      cout<<"Set is empty"<<endl;
  }





    cout<<endl<<endl<<endl;
}



void Map(){

    map<int,int> m;
    m.insert(pair<int,int>(4,5));
    m.insert(pair<int,int>(3,7));
    m.insert(pair<int,int>(8,9));
    map<int,int>::iterator it;

    //Iterate the elements
    cout<<"Iteration :"<<endl;
    cout<<"KEY   ELEMENT"<<endl;
    for(it = m.begin();it!=m.end();it++){
        cout<<it->first<<"       "<<it->second<<endl;
    }

    //Reverse iterate the elements
    map<int,int>::reverse_iterator rit;
    cout<<endl<<"Reverse iteration : "<<endl;
    cout<<"KEY   ELEMENT"<<endl;
    for(rit=m.rbegin();rit!=m.rend();rit++){
        cout<<rit->first<<"      "<<rit->second<<endl;
    }

    cout<<endl;


    map<int,int> m1;
    m1[3]=6;
    m1[8]=10;
    m1[10]=3;
    m1[543]=765;

    cout<<"m1[8] = "<<m1[8]<<endl;
    cout<<"m1[9] = "<<m1[9]<<endl;
    cout<<"KEY   ELEMENT"<<endl;
    for(auto &itr:m1){
        cout<<itr.first<<"     "<<itr.second<<endl;
    }


    map<char,int> m2;
    string s = "HELLOWORLD";
    for(int i=0;i<s.length();i++){
        m2[s[i]]++;
    }

    cout<<"\n\nm2[L] = "<<m2['L'];

    cout<<endl<<"KEY   ELEMENT"<<endl;
    for(auto &itr:m2){
        cout<<itr.first<<"     "<<itr.second<<endl;
    }


    // assigning the elements from m2 to m3
    cout<<"\n\nAssigning the elements from m2 to m3:";
    map<int, int> m3(m2.begin(), m2.end());
    cout<<endl<<"KEY   ELEMENT"<<endl;
    for(auto &itr:m3){
        cout<<itr.first<<"     "<<itr.second<<endl;
    }

    cout<<endl;



    // lower bound and upper bound for map  key = 5
    cout << "m1.lower_bound(5) : "
         << "\tKEY = ";
    cout << m1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << m1.lower_bound(5)->second << endl;
    cout << "m.upper_bound(5) : "
         << "\tKEY = ";
    cout << m.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << m.upper_bound(5)->second << endl;


    // remove all elements up to
    // element with key=3 in m1
    cout << "\n\nm1 after removal of"
            " elements less than key=10 : ";

    m1.erase(m1.begin(), m1.find(10));
    cout<<endl<<"KEY   ELEMENT"<<endl;
    for(auto &itr:m1){
        cout<<itr.first<<"     "<<itr.second<<endl;
    }


    // remove all the elements with key=3 in m;
    cout<<endl<<"\nm after the removal of elements wiht key=3 :";
    int num = m.erase(3);
    cout<<endl<<"KEY   ELEMENT"<<endl;
    for(auto &itr:m){
        cout<<itr.first<<"     "<<itr.second<<endl;
    }

    //num returns number of elements erased
    cout<<"number of elements removed : "<<num<<endl;



}


void Unordered_map() {

    cout << "Unordered map" << endl << endl;

    map<char, int> M;
    unordered_map<char, int> U;
    String s = "Noragami"

        for (char c : s) {
            M[c]++;       //O(NlogN)  where N = len(name)
        }

    for (char c : s) {
        U[c]++;      //O(N)   where N = len(name)
    }


    //                     Ordered Maps      UnOrdered Maps
    //  add(key,value)       O(log(N))          O(1)
    //  erase(key)           O(log(N))          o(1)
    //  

}


int main()
{
   Vector();
   Set();
   Map();
   Unordered_map();

   return 0;
}
