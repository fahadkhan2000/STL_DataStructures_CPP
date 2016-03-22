//
//  sets.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 21/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__sets__
#define __STL_DataStructs_Programs__sets__

#include <stdio.h>
#include <set>
#include <string>
#include <iostream>

using namespace std;

class sets
{
public:
    sets();
    void insert(string item);
    void delete_element(string item);
    void size_of_set();
    void find_element(string item);
    void display_by_iterator();
    void clear_all();
    
private:
    set<string> st;
    set<string>::iterator itr;
};




#endif /* defined(__STL_DataStructs_Programs__sets__) */
