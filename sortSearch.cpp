#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a)
{
    for(int i=1;i<a.size();i++)
    {
        for(int j=0;j<a.size()-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

}
int binarySearch(const vector<int>& a,int key)
{
     for(auto i:a)
    {
      cout<<i<<'\t';
    }
    cout<<endl;
    int low=0;
    int high=a.size()-1;
    while(high>=low)
    {
        int mid=(high+low)/2;
        if(a[mid]>key)
            high=mid-1;
        else if(a[mid]<key)
            low=mid+1;
        else
            return mid;

    }
    return -1;

}


int main()
{
  vector<int> x{501,408,998,105,605,809,1500,6000};
  bubbleSort(x);
  cout<<binarySearch(x,998)<<endl;
}
