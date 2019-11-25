#include<iostream>
using namespace std; 
int main()
4{
int r=3; int c=3;
int mat1[r][c],mat2[r][c];
  for(int i=0 ;i<r;i++)
  {
   for(int j=0;j<c;j++)
    {
     cin>>mat1[i][j];
    }
  }
   for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
       cin>>mat2[i][j];
      }
    }
int mat3[r][c]= {0}; 
  for(int i=0;i<r;i++)
   {
     for (int j=0;j<c;j++)
      {
       for(int k=0;k<r;k++)
       {
        mat3[i][j]=mat1[i][k]*mat2[k][j]+mat3[i][j];
       }
      }
   }
     for(int i=0;i<r;i++)
     {
        for(int j =0;j<c;j++)
         {
         cout<<mat3[i][j]<<" ";
        } 
        cout<<endl;
     }
     return 0;
}
