#ifndef MAPPINGOFLETTERS
#define MAPPINGOFLETTERS
#include<iostream>
#include<string.h>
#include<vector>


class MappingOfLetters
{
    private:
    std::string sQfirstelement;
    std::vector<std::string> GenerateletterComb(int iDigits[],int iNum,std::string sKeyPad[]);
    
    public:
    MappingOfLetters();
    ~MappingOfLetters();
    bool letterCombinations(int iDigits[], int iNum);
    
};
    
#endif 
