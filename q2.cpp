#include<iostream> 
using namespace std; 
int main()
{
int r1,c1,r2,c2;
    cin>>r1;
    cin>>c1;
int arr1[r1][c1];
   for(int i=0; i<r1; i++) 
    {
   for(int j=0; j<c1; j++)
      {
       cin>>arr1[i][j];
      }
}
   cin>>r2;
   cin>>c2;
   int arr2[r2][c2];
   for(int i=0; i<r2; i++)
   {
    for(int j=0; j<c2; j++)
    {  
    cin>>arr2[i][j];
    }
}
int sumarr[r1][c1]= {0};
     for(int i=0; i<r1; i++) //adding two matrices
       {
        for(int j=0; j<c1; j++)
         {
           sumarr[i][j]=arr1[i][j]+arr2[i][j];
         }
       }
       cout<<endl;
     for(int i=0; i<r1; i++)
       {
         for(int j=0; j<c1; j++)
          {
            cout<<sumarr[i][j]<<" ";
          }
       cout<<endl;
       }
int subarr[r1][c1]= {0};
 for(int i=0; i<r1; i++) //subtracting two matrices
  {
    for(int j=0; j<c1; j++)
     {
      subarr[i][j]=arr1[i][j]-arr2[i][j];
     } 
   }
    cout<<endl;
     for(int i=0; i<r1; i++)
      {
        for(int j=0; j<c1; j++)
          {
           cout<<subarr[i][j]<<" ";
          }
         cout<<endl; 
      }
    cout<<endl;
    return 0;
}
