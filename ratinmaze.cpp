#include<iostream>
using namespace std;

bool isSafe (int** arr, int x, int y, int n, int** solArr)
{
    if (x == n-1 && y == n-1)          // Base Condition
    {
        solArr[x] [y] = 1;
        return true;
    }

    if (x < n && y < n && arr[x] [y] == 1)
    {
        return true;
    }
}

bool ratinMaze (int** arr, int x, int y, int n, int** solArr)
{
    if (isSafe (arr, x, y, n, solArr))
    {
        return true;
    }
    if (ratinMaze (arr, x, y+1, n, solArr))
    {
        return true;
    }

    solArr [x] [y] = 0;          // Backtracking
    return false;
}

int main ()
{
    int n;
    cin >> n;
    int** arr = new int* [n];
    for (int i=0; i<n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> arr [i] [j];
        }
    }


    int** solArr = new int* [n];
    for (int i=0; i<n; i++)
    {
        solArr[i] = new int[n];
        for (int j=0; j<n; j++)
        {
            solArr [i] = new int [n];
            for (int j=0; j<n; j++)
            {
                solArr [i] [j] = 0;
            }
        }
        if (ratinMaze (arr, 0, 0, n, solArr))
        {
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    cout << solArr [i] [j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}

/* 
  INPUT
1,0,1,0,1
1,1,1,1,1
0,1,0,1,0
1,0,0,1,1
1,1,1,0,1
*/