// 2071. 평균값 구하기

#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int eterNum;
    cin >> eterNum;

    float* outputNum = new float[eterNum]{};
    int getNum, sum;

    for(int j=0; j < eterNum; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> getNum;
            sum += getNum;     
        }
        outputNum[j] = sum/10.0;        // 평균 값을 해당 배열에 각각 저장
        sum = 0;
    }

    for (int i = 0; i < eterNum; i++)
    {
        printf("#%d %.0f\n", i+1, outputNum[i]);    // 소수점 첫째 자리에서 반올림
    }
    

    delete [] outputNum;
    return 0;
}