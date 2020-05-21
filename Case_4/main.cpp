#include<iostream>
#include"Pch.h"
using namespace std;

int main(int argc,char* argv[]) 
{
    if (argc==2 && strcmp(argv[1],"-h")==0)
    cout<<"Usage:"<<argv[0]<< "\tPositive Integeres between 2-9"<<endl;
    else
    {
        MappingOfLetters obj;
        int iNum;
        cout<<"Enter num of elements "<<endl;
        cin>>iNum;
        int iDigits[iNum]; 
        cout<<"Enter elements"<<endl;
        for(int iIndex=0;iIndex<iNum;iIndex++)
	{
            cout<<"Enter element"<<iIndex+1<<endl;
            cin>>iDigits[iIndex];
            if(iDigits[iIndex]>=0&&iDigits[iIndex]<=9){}
            else
            {
                cout<<"Invalid Input.Enter -h for usage."<<endl;
                return 0;
                
            }
        }
        obj.letterCombinations(iDigits, iNum);
        }
        return 0; 
} 
