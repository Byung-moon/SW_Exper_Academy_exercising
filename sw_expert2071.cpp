// 2071. ��հ� ���ϱ�

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
        outputNum[j] = sum/10.0;        // ��� ���� �ش� �迭�� ���� ����
        sum = 0;
    }

    for (int i = 0; i < eterNum; i++)
    {
        printf("#%d %.0f\n", i+1, outputNum[i]);    // �Ҽ��� ù° �ڸ����� �ݿø�
    }
    

    delete [] outputNum;
    return 0;
}