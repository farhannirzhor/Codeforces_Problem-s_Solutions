#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5] ;
    int row1 = -1;
    int col1= -1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >>mat[i][j];
            if(mat[i][j]==1)
            {
                row1 = i+1;
                col1 = j+1;
            }
        }
    }
    int trow =3;
    int tcol = 3;
    int m=0;
    if(row1 < trow)
    {
        m += (trow-row1);
    }
    else if(row1 > trow)
    {
        m += (row1 - trow);
    }


    if(col1 < tcol)
    {
        m += (tcol-col1);
    }
    else if(col1 > tcol)
    {
        m += (col1 - tcol);
    }

    cout << m;
}
