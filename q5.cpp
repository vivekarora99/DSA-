#include<iostream>
using namespace std;
class rectangle
{
  private:
   int l1;
   int b1;
  public:
int area(int l1,int b1)
  {
  return l1*b1;
  }
   int perimeter(int l1,int b1)
   {
    return 2*(l1+b1);
   }
};
int main()
{
   rectangle object1;
    int l,b;
	 cin>>l;
	  cin>>b;
	   cout<<endl<<object1.area(l,b);
	    cout<<endl<<object1.perimeter(l,b);
    return 0;
}
