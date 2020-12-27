#include <iostream>
#include <vector>
using namespace std;
//Bubble sort
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
    cout<<"Sort by bubbleSort\n";

}
//Selection sort
void selectSort(vector<int>& a)
{
    int length=a.size();
    for(int i=0;i<length-1;i++)
    {
        
            int minimum=a[i];
            int mini_index=i;
            //search for the minimun value
            for(int j=i+1;j<length;j++)
            {
                if(minimum>a[j])
                {
                    minimum=a[j];
                    mini_index=j;
                }
            }
            //exchange the value of a[i] with the value of a[mini_index]
            {
                int temp=a[i];
                a[i]=a[mini_index];
                a[mini_index]=temp;
            }
    }
    cout<<"Sort by selectSort\n";

}
// Insertion sort
void insertSort(vector<int>& a)
{
    int length=a.size();
    for(int i=1;i<length;i++)
    {
       for(int j=i;j>0&&(a[j]<a[j-1]);j--)
       {
           int temp=a[j];
           a[j]=a[j-1];
           a[j-1]=temp;
       }

    }
    cout<<"sort by insertSort\n";
}
/*
void insertSort(vector<int>& a)
{
    int length=a.size();
    for(int i=1;i<length;i++)
    {
        int index=i;
        for(int j=i-1;j>=0&&(a[i]<a[j]);j--)
        {
            index=j;
        }
        int temp=a[i];
        for(int j=i;j>index;j--)
        {
            a[j]=a[j-1];
        }
        a[index]=temp;

    }
    cout<<"sort by insertSort\n";
}
*/
void shellSort(vector<int>& a)
{
    int length=a.size();
    int h=1;

    while(h<length/3)
        h=3*h+1;
    while (h>0)
    {
        for(int i=h;i<length;i++)
        {
            for(int j=i;j>=h&&(a[j]<a[j-h]);j--)
            {
                int temp=a[j];
                a[j]=a[j-h];
                a[j-h]=temp;
            }
        }
        h/=3;
    }
    cout<<"sort by shellSort\n";
    
    
    
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
  //vector<int> x{501,408,998,105,605,809,1500,6000};
  vector<int> x{1,2,3,4,15,59,20,48,60,501,408,998,105,605,809,1500,6000};
  //bubbleSort(x);
  //selectSort(x);
  //insertSort(x);
  shellSort(x);
  cout<<binarySearch(x,998)<<endl;
}
