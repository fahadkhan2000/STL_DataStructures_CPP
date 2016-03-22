//
//  vectors.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 16/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "vectors.h"

vectors::vectors(string str)
{
    s = str;
}

void vectors::insert(string s)
{
    v.push_back(s);
}

void vectors::delete_last_element()
{
    v.pop_back();
}

void vectors::display_by_index()
{
    cout<<"vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void vectors::display_by_iterator()
{
    cout<<"vector : ";
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void vectors::clear_all()
{
    v.clear();
}

void vectors::size_of_vector()
{
    cout<<"vector size = ";
    cout<<v.size()<<endl;
}






