/*Purpose 	:To Encrypt and Decrypt given sample files
	Language	:C++
	Author  	: Sirisha Chowdary Bonthu
	Date    	: 8/05/2020
	
CASE 3 :Given a sample text file as input, scan all the words in the text file and
a. Create a new file, which encodes all the word in the source file by reversing each word in text
file and replacing all the spaces in between the words with an alpha numeric character.
E.g : This is a sample text
 Siht*si*a*elpmas*txet  Encoded format
 
b. Ask the user to enter a secret key before initiating the encoding sequence
c. Provide the option to decode the file, upon the user’s choice and start the decoding only when
the secret key matches with the one obtained in the previous step to provide the original text
file format. */	

#include"EncodeDecode.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<string.h>
using namespace std;

//Default constructor
EncodeDecode::EncodeDecode()
{
    sWordInFile="\0";
    sLineInFile="\0";
    sTemp="\0";
    sToReplace="\0";
    sToUpdate="\0";
    sNewFile="\0";
    cout<<"Default constructor called"<<endl;
}

//Method to write Encoded data to file
bool EncodeDecode:: WriteEncodeFile(string sfileName,string sNewFile,string sKey,string sAlphaNum)
{
    ifstream file(sfileName);
    ofstream myfile(sNewFile);
    myfile<<"key="<<sKey<<endl;
	while(getline(file, sLineInFile))
	{
	    istringstream iss(sLineInFile);
	    while (iss>>sWordInFile)
	    {
	        reverse(sWordInFile.begin(),sWordInFile.end());
	        myfile<<sWordInFile<<sAlphaNum;
	        
	    }
	    myfile<<endl;
	    
	}
	file.close();
	myfile.close();
	return 1;
}
//Method to Generate Newfile name
string EncodeDecode:: GenerateFileName(string sfileName,string sToReplace,string sToUpdate)
{
    sNewFile = sfileName.c_str();
    size_t sPosToReplc = sNewFile.find(sToReplace);
    sNewFile.replace(sPosToReplc, sToReplace.length(), sToUpdate);
    return sNewFile;
    
}
//Method to Encrypt and Decrypt key
string EncodeDecode:: GetKey(string sKey) 
{ 
    string OutKey = sKey;
    for (int iIndex = 0; iIndex < sKey.size(); iIndex++)
    OutKey[iIndex] = sKey[iIndex] ^ 'I';
    return OutKey;
}

//Method to Encrypt data and write to file
bool EncodeDecode:: DecodeFile(string sfileName,string sKey)
{
    ifstream file(sfileName);
    if(!file.is_open())
    cout<<"Could not open file"<<endl;
    else
    if(file.is_open())
    {
        sToReplace="_encode.txt";
        sToUpdate="_decode.txt";
        sNewFile=GenerateFileName(sfileName,sToReplace,sToUpdate);
        ofstream myfile(sNewFile);
        char ch;
        cout<<"Enter the same Alphanumeric character used for encoding"<<endl;
        cin>>ch;
        while(getline(file,sLineInFile) )
        {
            size_t pos = sLineInFile.find("=");
			string Keyinfile = sLineInFile.substr(pos+1);
			sKey=GetKey(sKey);
			if(Keyinfile==sKey)
			while(getline(file, sLineInFile))
			{
			    istringstream iss(sLineInFile);
			    while (getline(iss,sWordInFile,ch))
			    {
			        reverse(sWordInFile.begin(),sWordInFile.end());
	                myfile<<sWordInFile<<" ";
			        
			    }
			    myfile<<endl;
			    
			}
			else
	        cout<<"Invalid Password.Enter correct password to Decrypt file."<<endl;
            
        }
        myfile.close();   
    }
    file.close();
    return 1;
}
//Method used to encode data
bool EncodeDecode:: EncodeFile(string sfileName,string sKey)
{ 
    ifstream file(sfileName);
    if(!file.is_open())
    cout<<"Could not open file"<<endl;
    else if(file.is_open())
    {
        sToReplace=".txt";
        sToUpdate="_encode.txt";
        string sAlphaNum;
        cout<<"Enter alpha numeric to be replaced with space"<<endl;
        cin>>sAlphaNum;
        string sNewFile=GenerateFileName(sfileName,sToReplace,sToUpdate);
        sKey=GetKey(sKey);
        WriteEncodeFile(sfileName,sNewFile,sKey,sAlphaNum);
        return 1;
        
    }
}

//Default destructor
EncodeDecode::~EncodeDecode()
{
    cout<<"Default Destructor called"<<endl;
}
