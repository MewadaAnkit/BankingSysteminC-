#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<random>
using namespace std;
int rnd(void)
{
    srnd(time(0));
    for(int i = 0; i<1; i++) 
      return (1000+(rand() % 9000));
}
int main()
{
    int pin,ch,p1,mob;
    float balance=1000,credit=0,debit=0;
    char fn[25],ln[25],mail[20],Address[25];
    cout<<"\n===============================================================";
    cout<<"\n||                                                           ||";
    cout<<"\n||                  BANK OF INDIA                            ||";
    cout<<"\n||                                                           ||";
    cout<<"\n===============================================================";
    cout<<"\nWELCOME IN BANK OF INDIA "<<endl;
    cout<<"Please follow our Guidelines to open your account."<<endl;
    cout<<"Enter your First Name : "<<endl;
    cin>>fn;
    cout<<"Enter your Last Name  : "<<endl;
    cin>>ln;
    cout<<"Enter your Mobile Number :"<<endl;
    cin>>mob;
    cout<<"Enter your E-mail address :"<<endl;
    cin>>mail;
    cout<<"Enter your address here : "<<endl;
    cin>>Address;
    cout<<"Thank you Mr."<<fn<<ln<<" for Opening account."<<endl;
    cout<<"Please wait we are generating you 4 digit Pin for you transcation."<<endl;
    cout<<"generating................................||"<<endl;
    pin=rnd();
    cout<<"Your 4 digit Pin is : "<<pin<<".Please remember it for further transaction."<<endl;
    cout<<"Warning ! Please Don't share your pin with Anyone."<<endl;
    cout<<"Your account has been credit of Rs.1000. For Further transaction please choose following options "<<endl;
    do
    {
        cout<<"Press"<<endl;
        cout<<"1. Deposit  "<<endl;
        cout<<"2. Withdraw "<<endl;
        cout<<"3. Check Balance "<<endl;
        cout<<"4. Chage your Pin "<<endl;
        cout<<"5. exit "<<endl;
        switch(ch)
        {
            case 1:cout<<"Enter amount to be deposit :";
                   cin>>credit;
                   cout<<"Please Enter you 4 digit Pin :";
                   if(pin==p1)
                   {
                    cout<<"Rs."<<credit<<" is successfully credited  in you account no."<<endl;
                     balance += credit;
                   }
                   else
                    cout<<"Please Enter valid Pin !";
                   break;
            case 2:cout<<"Enter amount to be withdrawn : ";
                   cin>>debit;
                  cout<<"Please Enter you 4 digit Pin :"<<endl;
                   if(pin==p1)
                   {
                     if(debit>balance)
                     {
                         cout<<"Insufficient Balance!";
                     }
                     else
                     {
                       cout<<debit<<"Rs.is successfully Debited."<<endl;
                       balance -= credit;
                     }
                   }
                   else
                    cout<<"Please Enter valid Pin !";
                   break;
            case 3:cout<<"Your account has"<<balance<<" %f Rs."<<endl;
                   break;
            case 4:cout<<"Please Enter your old Pin: ";
                   cin>>pin;
                   pin=rnd();
                   cout<<"Your Pin is Successfully Changed.Your Pin is :"<<pin<<endl;
                   break;
            case 5:exit(0);
            default:cout<<"Wrong Choice!"<<endl;


        }while(ch!=5);

        return 0;
    }







}