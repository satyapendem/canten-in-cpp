#include<iostream>
using namespace std;
class canten
{
  public:
   void noodels()
   {
     int qu,pr=50;
     cout<<"enter the quality:";
     cin>>qu;
     cout<<"\n";
     cout<<"Bill amount is:"<<qu*pr;
    }
   void briyani()
   {
     int qu,pr=100;
     cout<<"enter the quantity:";
     cin>>qu;
     cout<<"\n";
     cout<<"Bill amount is:"<<qu*pr<<"\n";
    }
   void vegpuff()
   {
     int qu,pr=10;
     cout<<"enter the quantity:";
     cin>>qu;
     cout<<"\n";
     cout<<"Bill amount is:"<<qu*pr<<"\n";
    }
   void samosa()
   {
     int qu,pr=5;
     cout<<"enter the quantity:";
     cin>>qu;
     cout<<"\n";
     cout<<"Bill amount is:"<<qu*pr<<"\n";
    }
};

int main()
{
  canten c;
  int ch;
  cout<<"\t\t************welcome to kiet canten**************"<<"\n";
  while(1)
  {
    cout<<"select item from the menu\n";
    cout<<"1.noodels\n2.briyani\n3.vegpuff\n4.samosa\n5.exit\n";
    cout<<"enter the item number to purchase:";
    cin>>ch;
    switch(ch)
     {
       case 1: c.noodels();
          break;
       case 2: c.briyani();
           break;
      case 3: c.vegpuff();
         break;
      case 4: c.samosa();
         break;
      case 5:
             return 0;
        break;
     default:
            cout<<"no item found";
    }
 }
return 0;
}
