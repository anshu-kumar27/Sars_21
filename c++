#include <bits/stdc++.h>
using namespace std;

class sales{
    public:
    int n; //quantity
    int a; //price 
    int AP; //actual product 
    void getdata(){
        
        cout<<"quantity sold : "; //quantity 
        cin>>n;
        cout<<"selling price : "; //sold
        cin>>a;
        cout<<"manufacturing price: "; //the cost by which the product got manufactured
        cin>>AP;
    }
    int output(){
        cout<<endl;
        int total_selling =0;
        total_selling = a*n;
        int actual_price=0;
        actual_price=AP*n;
        cout<<"the total selling is of :"<<total_selling<<endl;
        cout<<"actual price is :"<<actual_price<<endl;

        cout<<"profit :"<<total_selling-actual_price<<endl<<endl;
    }

};
int main()
{
    sales a;
    cout<<endl;
    cout<<"type your details for Product A: "<<endl;
    a.getdata();
    
    sales b;
    cout<<endl;
    cout<<"type your details for Product B: "<<endl;
    b.getdata();
    
    sales c;
    cout<<endl;
    cout<<"type your details for Product C- "<<endl;
    c.getdata();
    
    sales d;
    cout<<endl;
    cout<<"type your details for Product D- "<<endl;
    d.getdata();
    
    cout<<"analysis sheet for product A is - "<<endl;
    a.output();
    cout<<"analysis sheet for product B is - "<<endl;
    b.output();
    cout<<"analysis sheet for product C is - "<<endl;
    c.output();
    cout<<"analysis sheet for product D is - "<<endl;
    d.output();

    }
