int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int queries;
    cin>>queries;
    int i,o,z;
    for(i=0;i<queries;i++)
    {
     cin>>o>>z;
     if(o==1)
     {
         s.insert(z);
     }
     else if(o==2)
     {
         s.erase(z);
     }
     else if(o==3)
     {
        set<int> ::iterator itr=s.find(z);
        if(itr==s.end())
        cout<<"No"<<endl;
        else 
        cout<<"Yes"<<endl; 
     }
    }
    return 0;
}
