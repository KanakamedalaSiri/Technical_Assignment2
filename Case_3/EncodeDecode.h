#ifndef ENCODEDECODE
#define ENCODEDECODE
#include<iostream>
#include<string.h>

class EncodeDecode
{
    private:
    std::string sWordInFile;
    std::string sLineInFile;
    std::string sToReplace;
    std::string sToUpdate;
    std::string sNewFile;
    std::string GenerateFileName(std::string sfileName,std::string sToReplace,std::string sToUpdate);
    std::string GetKey(std::string sKey);
    bool WriteEncodeFile(std::string sfileName,std::string sNewFile,std::string sKey,std::string sAlphaNum);
    
    public:
    EncodeDecode();
    ~EncodeDecode();
    bool EncodeFile(std::string sfileName,std::string sKey);
    bool DecodeFile(std::string sfileName,std::string sKey);
    
    
};
    
#endif 
