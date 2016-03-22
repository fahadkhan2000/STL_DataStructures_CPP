//
//  stacks.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "stacks.h"

stacks::stacks()
{
    
}

void stacks::insert(string item)
{
    st.push(item);
}

void stacks::delete_element()
{
    st.pop();
}

void stacks::top_element()
{
    cout<<"top element in stack = "<<st.top()<<endl;
}

void stacks::size_of_stack()
{
    cout<<"size of stack = "<<st.size()<<endl;
}