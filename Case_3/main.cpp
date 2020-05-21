#include<iostream>
#include"Pch.h"
using namespace std;

int main(int argc,char* argv[])
{
    EncodeDecode obj;
    if (argc==2 && strcmp(argv[1],"-h")==0)
    cout<<"Usage:"<<argv[0]<<"-d/-e(decrypt/encrypt) -f [Filename] -k [key]"<<endl;
    else if(argc==6)
    obj.SecuredFile(argv);
    else
    cout<<"Invalid Input.Enter -h for program usage"<<endl;
    return 0;
}
