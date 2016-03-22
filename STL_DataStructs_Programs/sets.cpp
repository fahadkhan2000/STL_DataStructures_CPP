//
//  sets.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 21/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "sets.h"

sets::sets()
{
}

void sets::insert(string item)
{
    st.insert(item);
}

void sets::delete_element(string item)
{
    st.erase(item);
}

void sets::size_of_set()
{
    cout<<" Size of set : ";
    cout<<st.size()<<endl;
}

void sets::find_element(string item)
{
    itr = st.find(item);
    if(itr != st.end())
        cout<<"Element "<<*itr<<"found in set"<<endl;
    else
        cout<<"Element not found in set"<<endl;
}

void sets::display_by_iterator()
{
    cout<<endl<<"Elements of the set : "<<endl;
    for(itr=st.begin(); itr != st.end(); itr++)
    {
        cout<<*itr<<"  ";
    }
    cout<<endl;
}

void sets::clear_all()
{
    st.clear();
}