#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements on the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;


    cout<<"enter the elements to be searhed = "<<endl;
    int element;
    cin>>element;
    int mid,lower,upper;
    lower=0;
    upper = n;
    mid= (lower+upper)/2;
    int found, c;
    while(lower<=upper){
        if(a[mid]==element){
            found = mid;
            c++;
            break;
        }
        else{
            if(element>a[mid]){
                lower = mid;
            }
            else{
                upper=mid;
            }
        }

        mid=(lower+upper)/2;
    }
    if(c>0)
    cout<<"we found the element"<<endl<<a[found];
    else
    cout<<"sorry! the element is not available :(";
}