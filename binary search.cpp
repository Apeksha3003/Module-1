#include<iostream.h>
int rbinary_search(int list[], int key, int low, int high);
int main()
{
    int n,i,key,list[25],pos;
    cout<<"enter number of elements\n";
    cin>>n;
    cout<<"enter"<<n<<"elements in ascending order";
    for(i=0;i<n;i++)
    cin>>list[i];
cout<<"enter key to search ";
cin>>key;
pos=rbinary_search(list,key,o,n-1);
if(pos==-1)
cout<<"element not found";
else
cout<<"element found at index"<<pos;
}
int rbinary_search(int list[], int key, int low, int high)
{
    int mid,pos==-1;
    if(low<=high)
    {
        pos=mid;
        return pos;
    }
    else if (key <list[mid])
    return rbinary_search(list,key,low,mid-1);
else return rbinary_search(list,key,mid+1,high);

return pos;
}