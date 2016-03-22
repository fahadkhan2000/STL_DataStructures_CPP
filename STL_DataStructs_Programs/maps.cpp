//
//  maps.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 21/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "maps.h"

maps::maps()
{
}

void maps::insert(string key , int value)
{
    m.insert(pair<string, int>(key, value));
}

void maps::delete_element(string del_key)
{
    m.erase(del_key);
}

void maps::size_of_map()
{
    cout<<"map size = ";
    cout<<m.size()<<endl;
}

void maps::find_by_key(string key)
{
    if(m.count(key) != 0)
        cout<<"key found: value = "<<m.find(key)->second<<endl;
    else
        cout<<"key not found "<<endl;
}

void maps::display_by_iterator()
{
    cout<<"map elements : "<<endl;
    for(itr = m.begin(); itr != m.end(); itr++)
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }
}

void maps::clear_all()
{
    m.clear();
}