//count the frequency from Arr using generic programming

#include<iostream>
using namespace std;
template<class T>

int CountFrequency(T Arr[] , int iSize , T no)
{
    int iCnt =0;
    int iCount=0;

    for(iCnt=0 ; iCnt< iSize ; iCnt++)       
    {
        if(  Arr[iCnt] == no)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    float Brr[]= {10.1f,20.2f ,30.3f ,40.4f ,50.5f,20.2f};
    int iRet =0.0f;

    iRet = CountFrequency(Brr , 6 , 20.2f );

    

    cout<<"Maximum frequency is:"<<iRet<<"\n";


    return 0;
}