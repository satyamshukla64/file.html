# include <iostream>
using namespace std;
 int main (){
    int a;
    string s;
    cout<<"Enter mobile Brand name : ";
    cin>>s;

    if (s=="Realme"){
        cout<<"Enter your Slary : ";
        cin>>a;

        if(a>=0 && a<=30000){
            cout<<"Enter which mobile you want 12pro Or 12promax : ";
            cin>>s;

            if(s=="12pro"){
                cout<<"Mobile Price is 20000 ";
                cout<<"on 5% rate price will :"<<(20000*5)/100 +20000 <<endl;
                cout<<"You have to pay on monthly instaulment of :"<<((20000*5/100) +20000)/24;
            }

            else if(s=="12promax"){
                cout<<"Mobile Price is 30000 ";
                cout<<"on 5% rate price will :"<<(30000*5)/100 +30000 <<endl;
                cout<<"You have to pay on monthly installment of :"<<((30000*5/100) +30000)/24;

            }
        }


        else if(a>30000 && a<=70000){
            cout<<"Enter which mobile you want 13pro Or 13promax";
            cin>>s;

            if(s=="13pro"){
                cout<<"Mobile Price is 40000 ";
                cout<<"on 10% rate price will :"<<(40000*10)/100 +40000 <<endl;
                cout<<"You have to pay on monthly instaulment of :"<<((40000*10/100) +40000)/12;
            }

            else if(s=="13promax"){
                cout<<"Mobile Price is 50000 ";
                cout<<"on 10% rate price will :"<<(50000*10)/100 +50000 <<endl;
                cout<<"You have to pay on monthly installment of :"<<((50000*10/100) +50000)/12;

            }
        }

        else if(a>70000){

            cout<<"Enter which mobile you want 14pro Or 14promax";
            cin>>s;

            if(s=="14pro"){
                cout<<"Mobile Price is 60000 ";
                cout<<"on 15% rate price will :"<<(60000*15)/100 +60000 <<endl;
                cout<<"You have to pay on monthly instaulment of :"<<((60000*15/100) +60000)/6;
            }

            else if(s=="14promax"){
                cout<<"Mobile Price is 70000 ";
                cout<<"on 15% rate price will :"<<(70000*15)/100 +70000 <<endl;
                cout<<"You have to pay on monthly installment of :"<<((70000*15/100) +70000)/6;

            }

        }
        

    }

    else {
        cout<<"Invalid";
    }

}