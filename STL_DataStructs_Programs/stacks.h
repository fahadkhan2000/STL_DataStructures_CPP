//
//  stacks.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__stacks__
#define __STL_DataStructs_Programs__stacks__

#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

class stacks
{
public:
    stacks();
    void insert(string item);
    void delete_element();
    void size_of_stack();
    void top_element();
    
private:
    stack<string> st;
};



#endif /* defined(__STL_DataStructs_Programs__stacks__) */
