#include<iostream>
#include"EncodeDecode.h"
using namespace std;
int getOperation(char* argv)
{
    if(strcmp("-e",argv))
    return 1;
    if(strcmp("-d",argv))
    return 2;
    else
    return -1;
    
}

int main(int argc,char* argv[])
{
    EncodeDecode obj;
    string sfileName;
    string sKey;
    if(argc<=1)
    cout<<argv[0]<<"Give -h for usage"<<endl;
    if (argc>1 && strcmp(argv[1],"-h")==0)
    cout<<"Usage:"<<argv[0]<<"-e/-d -f [Filename] -k [key]"<<endl;
    int operation=getOperation(argv[1]);
    if(operation==-1)
    {
    cout<<"Invalid Input.Enter -h for usage"<<endl;
    return -1;
    }
    for(int i=2;i<argc;i++)
    {
        if(strcmp("-f",argv[i])==0 && i+1<argc && ((argv[i+1])!="\0"))
        {
            sfileName=argv[i+1];
            
        }
        if(strcmp("-k",argv[i])==0 && i+1<argc && ((argv[i+1])!="\0"))
        {
            sKey=argv[i+1];
            
        }
    }
    if(strcmp(argv[1],"-e")==0)
    obj.EncodeFile(sfileName,sKey);
    else if(strcmp(argv[1],"-d")==0)
    obj.DecodeFile(sfileName,sKey);
    
    return 0;
}
