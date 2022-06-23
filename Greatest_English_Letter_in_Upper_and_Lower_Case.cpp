#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/

class Solution {
public:
    string greatestLetter(string s) {

    string letter="";    
    int freq[128] = {0};
    for (auto ch : s)
        freq[ch]++;
    for (auto ch = 'Z'; ch >= 'A'; --ch)
        if (freq[ch] && freq[ch + 'a' - 'A']){
            letter.push_back(ch);
            break;
        }
            
    return letter;

    }
};