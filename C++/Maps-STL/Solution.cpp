#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m;
    int i,o,marks,sum,z;
    sum=0;
    string name;
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++)
    {
        cin>>o;
        if(o==1)
        {
            cin>>name>>marks;
            m[name]=m[name]+marks;
            //m.insert(pair<string,int>(name,marks));
        }
        if(o==2)
        {
            cin>>name;
            m.erase(name);
        }
        if(o==3)
        {
            cin>>name;
             map<string,int>::iterator itr=m.find(name);
             if(itr==m.end())
             {
                 cout<<"0"<<endl;

             }
             else 
             cout<<m[name]<<endl;
        }
    }
    return 0;
}



