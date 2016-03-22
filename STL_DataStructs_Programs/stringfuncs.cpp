//
//  stringfuncs.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "stringfuncs.h"

stringfuncs::stringfuncs()
{
    
}

void stringfuncs::insert_substring(string ss, int pos)
{
    if(pos <= ts.length())
        ts.insert(pos,ss);
    else
        cout<<"position out of bounds "<<endl;
}

void stringfuncs::erase_substring(int len, int pos)
{
    ts.erase(pos, len);
}

void stringfuncs::append_substring(string ss)
{
    ts.append(ss);
}

void stringfuncs::find_substring(string ss)
{
    found = ts.find(ss);
    
    if(found != string::npos)
        cout<<"Substring "<<ss<<" found at "<<found<<endl;
    else
        cout<<"Substring "<<ss<<" not found"<<endl;
}

void stringfuncs::display_string()
{
    for (itr = ts.begin(); itr != ts.end(); ++itr)
        cout<<*itr;
    cout<<endl;
}

void stringfuncs::replace_with_substring(string ss)
{
    ts.replace(0, 0, ss);
}