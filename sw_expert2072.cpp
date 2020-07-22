// 2072. È¦¼ö¸¸ ´õÇÏ±â

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // 데이터 입력 횟수 입력
    int eterNum;
    cin >> eterNum;
    
    // 동적 메모리 할당
    int* outputNum = new int[eterNum]{};
    int getNum, sum;
    
    //홀수만 연산
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
    
    // 결과값 출력
    for (int i = 0; i < eterNum; i++)
    {
        cout << '#' << i+1 << ' ' << outputNum[i] << endl;
    }
    
    // 메모리 
    delete [] outputNum;
    return 0;
}
