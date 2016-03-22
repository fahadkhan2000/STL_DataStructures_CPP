//
//  stringfuncs.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__stringfuncs__
#define __STL_DataStructs_Programs__stringfuncs__

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class stringfuncs
{
public:
    stringfuncs();
    void insert_substring(string ss, int pos);
    void erase_substring(int len, int pos);
    void append_substring(string ss);
    void replace_with_substring(string ss);
    void find_substring(string ss);
    void display_string();
    
public:
    string ts = "This string is for testing purpose";
    string::iterator itr;
    size_t found;
};

#endif /* defined(__STL_DataStructs_Programs__stringfuncs__) */
