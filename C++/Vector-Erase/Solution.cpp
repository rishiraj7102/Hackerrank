int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n,i,o;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>o;
        v.push_back(o);
    }
    int pos1,r1,r2;
    
    cin>>pos1>>r1>>r2;
    pos1--;
    v.erase(v.begin()+pos1);
    r1--;
    r2--;
    v.erase(v.begin()+r1,v.begin()+r2);
cout<<v.size()<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
