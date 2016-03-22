//
//  maps.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 21/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__maps__
#define __STL_DataStructs_Programs__maps__

#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;

class maps
{
public:
    maps();
    void insert(string key, int value);
    void delete_element(string del_key);
    void size_of_map();
    void find_by_key(string key);
    void display_by_iterator();
    void clear_all();
    
private:
    map<string , int> m;
    map<string , int>:: iterator itr;
};

#endif /* defined(__STL_DataStructs_Programs__maps__) */
