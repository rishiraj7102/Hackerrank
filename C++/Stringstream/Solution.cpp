vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    
    char s;
    int t;
    vector<int> v;
    while(ss>>t)
    {
      v.push_back(t);
      ss>>s;
    }
    return v;
}
