#include<iostream>
using namespace std;

int main()
{
    int a[10] = {2,4,6,8,10,12,14,16,18,20};
    int input;
    int search;
    cout<<"Enter an even number "<<endl;
    cin>>input;
    for(int i = 0; i < 10; i++){
        if(a[i] == input){
            search = i;
            break;
        }
        
    }
    if(a[search] == input){
    cout<<"Your value is at index "<<search+1<<endl;
    }
    else
    {
        cout<<"No value found "<<endl;
    }
    
   
    
    
    return 0;
}