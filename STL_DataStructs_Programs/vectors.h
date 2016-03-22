//
//  vectors.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 16/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__vectors__
#define __STL_DataStructs_Programs__vectors__

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class vectors
{
public:
    vectors(string s);
    void insert(string item);
    void delete_last_element();
    void size_of_vector();
    void display_by_index();
    void display_by_iterator();
    void clear_all();
    
private:
    vector<string> v;
    vector<string>:: iterator itr;
    string s;
    
};

#endif /* defined(__STL_DataStructs_Programs__vectors__) */
