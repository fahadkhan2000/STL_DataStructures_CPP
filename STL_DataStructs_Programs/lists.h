//
//  lists.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__lists__
#define __STL_DataStructs_Programs__lists__

#include <stdio.h>
#include <list>
#include <string>
#include <iostream>

using namespace std;

class lists
{
public:
    lists();
    void delete_element_by_value(string item);
    void insert_element_at_front(string e);
    void insert_element_at_end(string e);
    void delete_element_at_front();
    void remove_duplicate_values();
    void delete_element_at_end();
    void display_forward_list();
    void show_front_element();
    void show_last_element();
    void sort_forward_list();
    void reverse_elements();
    void size_of_list();

    
private:
    string arr[5] = {"one", "two", "three", "four", "four"};
    
    list<string> l;
    list<string>:: iterator itr;
};
#endif /* defined(__STL_DataStructs_Programs__lists__) */
