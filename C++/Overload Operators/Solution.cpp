Complex operator +( const Complex &x,  const Complex &y)
{
   Complex s;
   s.a=x.a+y.a;
   s.b=x.b+y.b;
   return s;
}
ostream& operator<<(ostream &out,const Complex c)
{
    return out<<c.a<<"+i"<<c.b<<endl;
    
}
