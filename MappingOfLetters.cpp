/*Purpose 	:For mapping of digit to letters of keypad
	Language	:C++
	Author  	: Sirisha Chowdary Bonthu
	Date    	: 12/05/2020
	
CASE 4 :Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the
number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not
map to any letters.
Example:
Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]. */	

#include"Pch.h"
#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std; 

// Function to return a vector that contains all generated letter combinations 
vector<string> MappingOfLetters::GenerateletterComb(int iDigits[],int iNum,string sKeyPad[]) 
{ 
    // To store the generated letter combinations 
    vector<string> v; 
    queue<string> q; 
    q.push(""); 
    while (!q.empty())
    {
        sQfirstelement = q.front(); 
        q.pop(); 
        // If complete word is generated 
        // push it in the list 
        if (sQfirstelement.length() == iNum) 
        v.push_back(sQfirstelement); 
        else
        // Try all possible letters for current digit in sKeyPad[] 
        //for(int iIndex=0;iIndex<((sKeyPad[iDigits[sQfirstelement.length()]]).length());iIndex++)
        //auto letter =sKeyPad[iDigits[sQfirstelement.length()]][iIndex];
        for (auto letter : sKeyPad[iDigits[sQfirstelement.length()]])
        q.push(sQfirstelement + letter); 
        
    } 
    // Return the generated list 
    return v;
    
} 
  
// Function that creates the mapping and displays letter Combinations
bool MappingOfLetters::letterCombinations(int iDigits[], int iNum) 
{ 
    // sKeyPad[i] stores all characters that corresponds to ith digit of phone 
    string sKeyPad[10] = { " ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" }; 
  
    vector<string> v = GenerateletterComb(iDigits, iNum, sKeyPad); 
  
    //Displays the contents of vector 
    for (auto word : v) 
        cout << word << " "; 
return 1;    
} 
