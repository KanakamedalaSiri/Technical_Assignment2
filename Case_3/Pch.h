#ifndef PCH
#define PCH
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class EncodeDecode
{
    private:
    string sWordInFile;
    string sLineInFile;
    string sTemp;
    string sToReplace;
    string sToUpdate;
    string sNewFile;
    int iIndex1;
    int iIndex2;
    
    public:
    ifstream file;
    ofstream myfile;
    void SecuredFile(char** cArgVar);
    void EncodeFile(string sfileName,string sKey);
    void DecodeFile(string sfileName,string sKey);
    string GetKey(string sKey);
    string GenerateFileName(string sfileName,string sToReplace,string sToUpdate);
    void WriteDecodeFile(string sLineInFile,string sNewFile);
    void WriteEncodeFile(string sfileName,string sNewFile,string sKey,string sAlphaNum);
    string ReversingWord(string sWordInFile);
};
    
#endif 
