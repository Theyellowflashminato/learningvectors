#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector <int> v;     //static declaration
   //vector <int> *vp = new vector <int> ();(dynamic alocation)
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   
   cout<<v[0]<<endl;
   cout<<v[1]<<endl;
   cout<<v[2]<<endl;
   }
