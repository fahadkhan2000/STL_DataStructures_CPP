//
//  lists.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "lists.h"

lists::lists()
{
    
}

void lists::insert_element_at_front(string e)
{
    l.push_front(e);
}

void lists::insert_element_at_end(string e)
{
    l.push_back(e);
}

void lists::delete_element_at_front()
{
    l.pop_front();
}

void lists::delete_element_at_end()
{
    l.pop_back();
}

void lists::show_front_element()
{
    cout<<endl<<"front element = "<<l.front()<<endl;
}

void lists::show_last_element()
{
    cout<<endl<<"last eleement = "<<l.back()<<endl;
}

void lists::size_of_list()
{
    cout<<endl<<"size of list = "<<l.size()<<endl;
}

void lists::delete_element_by_value(string item)
{
    cout<<endl<<"deleting element by value = "<<item<<endl<<endl;
    l.remove(item);
}

void lists::remove_duplicate_values()
{
    cout<<endl<<"removing duplicates"<<endl<<endl;
    l.unique();
}

void lists::reverse_elements()
{
    cout<<endl<<"reversing order of list"<<endl<<endl;
    l.reverse();
}

void lists::sort_forward_list()
{
    cout<<endl<<"sorting the list"<<endl<<endl;
    l.sort();
}

void lists::display_forward_list()
{
    cout<<"list element : ";

    for (itr = l.begin(); itr != l.end(); itr++)
        cout<<*itr<<"  ";
    cout<<endl;
}




