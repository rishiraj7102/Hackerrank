int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n,i,o;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>o;
        v.push_back(o);
    }
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
