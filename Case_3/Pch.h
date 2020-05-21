#ifndef PCH
#define PCH
#include<iostream>
#include<string.h>

class EncodeDecode
{
    private:
    std::string sWordInFile;
    std::string sLineInFile;
    std::string sTemp;
    std::string sToReplace;
    std::string sToUpdate;
    std::string sNewFile;
    int iStartPos;
    int iEndPos;
    bool EncodeFile(std::string sfileName,std::string sKey);
    std::string GenerateFileName(std::string sfileName,std::string sToReplace,std::string sToUpdate);
    std::string GetKey(std::string sKey);
    bool WriteEncodeFile(std::string sfileName,std::string sNewFile,std::string sKey,std::string sAlphaNum);
    bool DecodeFile(std::string sfileName,std::string sKey);
    
    public:
    EncodeDecode();
    ~EncodeDecode();
    bool SecuredFile(char** cArgVar);
    
};
    
#endif 
