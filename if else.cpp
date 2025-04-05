
#include<iostream>
using namespace std;

int main(){

   int balance=20000;
   int password,a=0;

   again:
   if(a!=3){
      a++;
   cout<<"Enter password: ";
   cin>>password;
    if(password==1234){

        cout<<"Enter 1 for check balance, 2 for deposite, 3 for withdraw: ";
        cin>>password;

        if(password==1){
            cout<<balance;
        }

        else if(password==2){
            int a;
            cout<<"Enter deposite amount: ";
            cin>>a;
            balance+=a;
            cout<<"Successfully deposite "<<a<<" in your account"<<endl;
            cout<<"Your current balance is "<<balance;
        }

        else if(password==3){
            int a;
            cout<<"Enter withdraw amount: ";
            cin>>a;
            if(a>balance){cout<<"Not enough balance in your account";}
            else{
            balance-=a;
            cout<<"Successfully withdraw "<<a<<" rupees"<<endl;
            cout<<"Your current balance is "<<balance;
            }
        }

        else{
            cout<<"Invalid input";
        }

    }

    else{
      if(a==3){cout<<"Your card is block";}
      else{
        cout<<"Wrong password Try again"<<endl;
        goto again;
      }
    }
   }

}


#include <iostream>
using namespace std;
// int main(){
// cout<<"enter the value";

//     int a;
//     cin>>a;
//     (a==0)?cout<<"number is 0":(a<0)?cout<<"negative":cout<<"positive";
    
// }
#include <iostream>
using namespace std;
// int main(){
//     cout<<"ean";
//     int a,r,c,b,d;
//     cin>>a;
//     (a<1000)?r=a%d,a=a/10,((a<100)?b=a%10,a=a/10,((a<10)?c=a%10,a=a%10:d):d):d;
//     cout<<r+b+c;
// }
#include <iostream>
using namespace std;
// int main(){
//     cout<<"ean";
//     int a=237,b,c,d;
//     b=a%10;
//     a=a/10;
//     c=a%10;
//     a=a/10;
    
//     (a>b&&a>c)?cout<<"greater is"<<a:(b>a&&b>c)?cout<<"greater is"<<b:cout<<"greater is"<<c;
// }
#include <iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     (a>b)?cout<<a<<"greater is a":cout<<b<<"greater b";
// }
#include <iostream>
using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     (a>=0)?cout<<"a is positive":cout<<"a is negative";
// }
#include <iostream>
using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     (a>=18)?cout<<"eligible":cout<<"not";
// }
#include <iostream>
using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     (a>30)?cout<<"pass":cout<<"fail";
// }
#include <iostream>
using namespace std;

// int main(){
//     int a;
//     cin>>a>>b;
//     (a>0 && a<50)?cout<<"betwwen":cout<<"not";
// }


//ATM USING MULTIPLE TERNARY
// int main (){
//     int a,c;
//     cout<<"enter password";
//     cin>>a;
//     (a==1234)?cout<<"succesfull"<<endl<<"press 0 for exit":cout<<"!!!!!!!!!wrong password!!!!!!!!!"<<endl<<"press 0 for back"<<endl<<"press 1 FOR enter again"<<endl,cin>>c;
//     (c==0)?cout<<"press 0 for main menu":cout<<"enter password again ",cin>>a;
//     (a==1234 || c==0)?cout<<"succesfull"<<endl<<"press 0 for exit"<<endl:cout<<"!!!!!!!!!wrong password!!!!!!!!!"<<endl<<"press 0 for exit"<<endl<<"press 1 for enter again"<<endl,cin>>c;
//     (c==0)?cout<<"ATM issue please press 0 again":cout<<"enter password again "<<endl,cin>>a;
//     (a==1234 || c==0)?cout<<"!THANK YOU!"<<endl:cout<<"!!!!!!!!!wrong password!!!!!!!!!"<<endl<<"card blocked"<<endl;
// }

//ATM USING NESTED CONDITION

// int main()
// {
//     char a;
//     cin>>a;
//     (a=='a'||a=='o'||a=='e'||a=='u'||a=='u')?cout<<"vowels":cout<<"consonent";
// }

// int main(){
//     int a;
//     cout<<"enter password";
//     cin>>a;
//     (a==1234)?cout<<"correct":cout<<"false";
// }

// int main()
// {
//     int a;
//     cout<<"enter a salary";
//     cin>>a;
//     (a>0 && a<50000)?cout<<a+(a*5/100):((a>0)?cout<<a+(a*10/100):cout<<0);
// }

// int main()
// {
//     int a;
//     cout<<"ean";
//     cin>>a;
//     (a>1 && a<50)?cout<<"welcome":cout<<"bye";
// }


// int main()
// {
//     int a;
//     cout<<"enter password";
//     cin>>a;
//     (a==1234)?cout<<"successfull":(cout<<"failed",cin>>a,(a==1234)?cout<<"successfull":(cout<<"failed",cin>>a,(a==1234)?cout<<"succesfull":cout<<"card blocked"));
// }


// int main()
// {
//     int a,b;
//     cout<<"enter password";
//     cin>>a>>b;
//     (a<b)?cout<<"a is small"<<a<<endl:cout<<"b is small"<<b<<endl;
// }
// int main()
// {
//     int a;
//     cout<<"enter password";
//     cin>>a;
//     (a%5==0)?cout<<"multiple"<<endl:cout<<"not"<<endl;
// }

// int main(){

//     int a;
//     cout<<"ean";
//     cin>>a;
//     (a%2==0 && a>100)?
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter a Number: ";
//     cin>>num;

//     if(num==1){

//         cout<<"Enter 2 3 4:- ";
//         cin>>num;

//         if(num==2){

//             cout<<"Enter 3 4:- ";
//             cin>>num;

//             if(num==3){

//                 cout<<"Enter 4:- ";
//                 cin>>num;

//                 if(num==4){ cout<<"Reached"; }
//                 else{cout<<"Invalid";}
//             }

//             else if(num==4){ cout<<"Reached"; }

//             else{cout<<"Invalid";}
//         }

//         else if(num==3){

//             cout<<"Enter 2 4:- ";
//             cin>>num;

//             if(num==2){

//                 cout<<"Enter 4:- ";
//                 cin>>num;

//                 if(num==4){cout<<"Reached";}
//                 else{cout<<"Invalid";}
//             }

//             else if(num==4){cout<<"Reached";}

//             else{cout<<"Invalid";}
//         }

//         else if(num==4){ cout<<"Reached"; }

//         else{cout<<"Invalid";}
//     }

//     else{
//         cout<<"Invalid";
//     }

// }


// int main()
// {
//     int c,d,a=2000,b,e=0;
//     num:
//     e++;
//     cout<<"enter passs";
//     cin>>c;
//     if(c==1234)
//     {
//         cout<<"pass correct"<<endl;
//         cout<<"press 1 for check balance"<<endl;
//         cout<<"press 2 for deposit"<<endl;
//         cout<<"press 3 for withdraw"<<endl;
//         cin>>d;
//         if(d==1){
//             cout<<"balance ="<<a<<endl;
//         }
//         else if(d==2){
//             cout<<"enter deposit amount"<<endl;
//             cin>>b;
//             b=a+b;
//             cout<<"balance is"<<b;
//         }
//         else if(d==3){
//             cout<<"withdrraw amount"<<endl;
//             cin>>b;
//             b=a-b;
//             cout<<"balance is"<<b<<endl;
//             if(b==0){
//                 cout<<"majduri kr bsdk";
//             }
//         }
//         else{
//             cout<<"invalid";
//         }
//     }
//     else{
//         cout<<"invalidd"<<endl;
//         if(e!=3){
//             goto num;
//         }
//     }
// }

// int main(){
//     int a;
//     cout<<"enter week days";
//     cin>>a;
//     switch(a){
//         case 1:
//         cout<<"monday";
//         break;
//         case 2:
//         cout<<"tuesday";
//         break;
//         case 3:
//         cout<<"wednesday";
//         break;
//         case 4:
//         cout<<"thursday";
//         break;
//         case 5:
//         cout<<"friday";
//         break;
//         case 6:
//         cout<<"saturday";
//         break;
//         case 7:
//         cout<<"sunday";
//         break;
//         default:
//         cout<<"invalid";
//     }
// }

// int main(){
//     int a,b,c;
//     cout<<"entyer any 2 no."<<endl;
//     cin>>a>>b;
//     cout<<"press1 for add"<<endl;
//     cout<<"press 2 for sub"<<endl;
//     cout<<"press 3 for mul"<<endl;
//     cout<<"press 4 for div"<<endl;
//     cin>>c;
//     switch(c){
//         case 1:
//         cout<<"addition is ="<<a+b<<endl;
//         break;
//         case 2:
//         cout<<"subtraction is ="<<a-b<<endl;
//         break;
//         case 3:
//         cout<<"multiplication is ="<<a*b<<endl;
//         break;
//         case 4:
//         cout<<"division is ="<<a/b<<endl;
//         break;
//         default:
//         cout<<"invalid";
//     }
// }

// int main(){
//     int a,b,c;
//     cout<<"entyer any 2 no."<<endl;
//     cin>>a>>b;
//     cout<<"press1 for starter"<<endl;
//     cout<<"press 2 for cinese"<<endl;
//     cout<<"press 3 for m"<<endl;
//     cout<<"press 4 for div"<<endl;
//     cin>>c;
//     switch(c){
//         case 1:
//         cout<<"addition is ="<<a+b<<endl;
//         break;
//         case 2:
//         cout<<"subtraction is ="<<a-b<<endl;
//         break;
//         case 3:
//         cout<<"multiplication is ="<<a*b<<endl;
//         break;
//         case 4:
//         cout<<"division is ="<<a/b<<endl;
//         break;
//         default:
//         cout<<"invalid";
//     }
// }

int main(){
    int a;
    cin>>a;
    (a%4==0 || a%400==0)?cout<<"leap":cout<<"not";
}
