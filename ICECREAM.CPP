#include<iostream>
using namespace std;

/*class obi
{
  public:
        int add(int chosen[],int x,int n);
}object;*/
int add(int chosen[],int x,int n)
{
 int c=0;
 for(int i=0;i<n;i++)a
  {
   c+=chosen[x-1];
  }
 return c;
}
  

int main()
{
 int p,price=0,x,n,ch,pass;
 int a[8]={20,20,30,30,30,50,50,100};
 int b[7]={20,20,20,30,30,30,50};
 int c[4]={60,60,60,60};
 char items_1[][50]={"Chocobar","Strawberry ice-cream","Gulkhand ice-cream","Chocolate ice-cream","Kaju ice-cream","Rajbhog","Pancham","Royal bowl"};
 char items_2[][50]={"Raspberry candy","Mango candy ","Mawa khulfi","Kaju khulfi","Roasted almond","Aanjeer khulfi","Magnum"}; 
 char items_3[][50]={"Strawberry faluda","Chocolate faluda","Lime faluda","Rose faluda"};
 cout<<"\t\t#OLD BOMBAY ICE-CREAM#\n"<<"*************    WELCOME   ***************\n";
 do
  {
   cout<<"\n\n\nWhat is your choice ?\n1.Ice Cream\n2.Khulfi\n3.Faluda \n0.Nothing\n";
   cin>>ch;
   switch(ch)
    {
     case 1:
          cout<<"\nWhat would you like to grab?\n";
          for(p=0;p<8;p++)
           {
             cout<<p+1<<"."<<items_1[p]<<"\t\t"<<a[p]<<"/-\n";
           }
          cin>>x;
          cout<<"How many?\n";
          cin>>n;
          price+=add(a,x,n);
          break;
      case 2:
            cout<<"\nWhat would you like to grab?\n";
            for(p=0;p<7;p++)
            {
              cout<<"p+1"<<"."<<items_2[p]<<"\t\t"<<b[p]<<"/-\n";;
            }
           cin>>x;
          cout<<"How many?\n";
          cin>>n;
          price+=add(b,x,n);
          break;
      case 3:
            cout<<"\nWhat would you like to grab?\n";
            for(p=0;p<4;p++)
            {
              cout<<"p+1"<<"."<<items_3[p]<<"\t\t"<<c[p]<<"/-\n";;
            }
           cin>>x;
          cout<<"How many?\n";
          cin>>n;
          price+=add(c,x,n);
          break;
      default:
           cout<<"\nInvalid choice\nPlease re-enter\n";
           break;     
    }
  cout<<"If you want some more please do '1', if not please do'0'";
  cin>>pass;
  }while(pass!=0);
  cout<<"\n\nPlease pay Rs."<<price<<"\t and collect your token...\n\n\n\t\tTHANK YOU\n";
  return 0;
}