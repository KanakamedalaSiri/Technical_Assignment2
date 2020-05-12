#ifndef PCH
#define PCH
#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

class MappingOfLetters
{
    private:
    string sQfirstelement;
    
    
    public:
    vector<string> GenerateletterComb(int iDigits[],int iNum,string sKeyPad[]);
    void letterCombinations(int iDigits[], int iNum);
    
};
    
#endif 
