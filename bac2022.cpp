#include <iostream>
#include <fstream>
using namespace std;

int a[10][9];
int n;

int FT(int i)
{
    int sum=0;
    for(int j=0; j<n-1; j++)
        sum+=a[i][j];
    return sum;
}

int main()
{

    ifstream f("Turneu.in.txt");
    f>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n-1; j++)
            f>>a[i][j];

    int max_i=1, m=0;
    for(int i=0; i<n; i++)
        if(m < FT(i) )
        {
            m= FT(i);
            max_i=i+1;
        }

    ofstream out;
    out.open("Turneu.out.txt");
    out<<max_i;

}

