#include<iostream>
using namespace std;
int main()
{
    int r=0, c=0, b=0 ;
    int u_input;
    int amount=0,count=0;
    cout<<"\n\n\t\t****************************************\n\n";
    cout<<"\t\t     WELCOME TO PARKING RESERVATION\n";
    cout<<"\n\t\t****************************************\n\n"<<endl;
///menu
   while(true)
    {
    cout<<"\nPress 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"Press 3 for Bus"<<endl;
    cout<<"Press 4 to show the record "<<endl;
    cout<<"Press 5 to delete the record"<<endl<<endl;
    cin>>u_input;

    if(u_input==1){
        if(count<=50)
        {
        r++;
        amount= amount+100;
        count= count+1;
        }
        else{
            cout<<"No more place to park"<<endl;
        }

    }
    else if(u_input==2){
        if(count<=50)
        {
        c++;
        amount= amount+200;
        count= count+1;
        }
        else{
            cout<<"No more place to park"<<endl;
        }
    }
    else if(u_input==3){
        if(count<=50)
        {
        b++;
        amount= amount+300;
        count= count+1;
        }
        else{
            cout<<"No more place to park"<<endl;
        }
    }
    else if(u_input==4){
        cout<<"\n****************************************\n"<<endl;
        cout<<"The total amount = "<<amount<<endl;
        cout<<"The total number of vehicles parked = "<<count<<endl;
        cout<<"The total number of Rickshaws parked = "<<r<<endl;
        cout<<"The total number of Cars parked = "<<c<<endl;
        cout<<"The total number of Buses parked = "<<b<<endl;
        cout<<"\n****************************************"<<endl;
    }
    else if(u_input==5){
        amount=0;
        count=0;
        r=0;
        c=0;
        b=0;
        cout<<"\n****************************\n"<<endl;
        cout<<"The record has been deleted"<<endl;
        cout<<"\n****************************"<<endl;
    }
    else{
        cout<<"Invalid number"<<endl;
    }
    }

 return 0;
}
