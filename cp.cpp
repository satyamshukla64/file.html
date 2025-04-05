#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    if(num==1){

        cout<<"Enter 2 3 4:- ";
        cin>>num;

        if(num==2){

            cout<<"Enter 3 4:- ";
            cin>>num;

            if(num==3){

                cout<<"Enter 4:- ";
                cin>>num;

                if(num==4){ cout<<"Reached"; }
                else{cout<<"Invalid";}
            }

            else if(num==4){ cout<<"Reached"; }

            else{cout<<"Invalid";}
        }

        else if(num==3){

            cout<<"Enter 2 4:- ";
            cin>>num;

            if(num==2){

                cout<<"Enter 4:- ";
                cin>>num;

                if(num==4){cout<<"Reached";}
                else{cout<<"Invalid";}
            }

            else if(num==4){cout<<"Reached";}

            else{cout<<"Invalid";}
        }

        else if(num==4){ cout<<"Reached"; }

        else{cout<<"Invalid";}
    }

    else{
        cout<<"Invalid";
    }

}
