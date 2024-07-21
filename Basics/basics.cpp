#include<iostream>
using namespace std;
int main(){
    cout<<"Hey there!"<<endl;
    // int
    int n;
    cin>>n;
    // long
    // long y;
    // cin>>y;
    // // string
    // string s;
    // cin>>s;
    // // character
    // char ch;
    // cin>>ch;
    // // float
    // float f;
    // cin>>f;
    // cout<<n<<" "<<y<<" "<<s<<" "<<ch<<" "<<f;
    if(n>18){
        cout<<"You are an adult";
    }
    else {
        cout<<"Not an adult";
    }
    switch(n){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Satuday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default : cout<<"Wrong Choice !!";
        break;
    }
    cout<<endl;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
    for(int i = 0 ; i < n ; i++)
    cout<<arr[i]<<" ";
}
