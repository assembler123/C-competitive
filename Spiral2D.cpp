#include <iostream> 
#include <vector> // for 2D vector 
using namespace std; 
vector<int> spiralOrder(const vector<vector<int> > &A) {
    int m=A.size();
    int n=A[0].size();
    vector<int> s;
    int t=0,l=0,r=n-1,b=m-1,dir=0;
    //dir 0 right-> 1 bottom| 2 left<- 3 up |^ 
    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
                s.push_back(A[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            {
                s.push_back(A[i][r]);
            }
            r--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            {
                s.push_back(A[b][i]);
            }
            b--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            {
                s.push_back(A[i][l]);
            }
            l++;
            dir=0;
        }
    }
    return s;
}

int main() 
{ 
    // Initializing 2D vector "vect" with 
    // values 
    vector<vector<int> > vect(4));
        for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
          cin>>v[i][j];
       }
    } 
   spiralOrder(vect);
}