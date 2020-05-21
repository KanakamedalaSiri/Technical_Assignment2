#ifndef PCH
#define PCH
#include<iostream>
#include<string.h>
#include<vector>


class MappingOfLetters
{
    private:
    std::string sQfirstelement;
    std::vector<std::string> GenerateletterComb(int iDigits[],int iNum,std::string sKeyPad[]);
    
    public:
    bool letterCombinations(int iDigits[], int iNum);
    
};
    
#endif 
