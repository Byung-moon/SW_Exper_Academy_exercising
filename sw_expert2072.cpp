// 2072. 홀수만 더하기

#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int eterNum;
    cin >> eterNum;

    int* outputNum = new int[eterNum]{};
    int getNum, sum;

    for(int j=0; j < eterNum; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> getNum;
            if(getNum%2 == 1)
            {
                sum += getNum;
            }
            else
            {
                continue;
            }
            
        }
        outputNum[j] = sum;
        sum = 0;
    }

    for (int i = 0; i < eterNum; i++)
    {
        cout << '#' << i+1 << ' ' << outputNum[i] << endl;
    }
    

    delete [] outputNum;
    return 0;
}