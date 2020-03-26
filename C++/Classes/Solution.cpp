class Student
{
    private:
    int age;
    string name,lname;
    int std;
    public:
    void set_age(int a)
    {
      age=a;
    }
    void set_first_name(string s1)
    {
        name=s1;
    }
    void set_last_name(string s2)
    {
        lname=s2;
    }
    void set_standard(int a2)
    {
        std=a2;
    }
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return name;

    }
    string get_last_name()
    {
        return lname;
    }
    int get_standard()
        {
            return std;

        }
        string to_string()
        {
           stringstream ss;
           ss<<age<<","<<name<<","<<lname<<","<<std;
           return ss.str();
            
        }
    
};
