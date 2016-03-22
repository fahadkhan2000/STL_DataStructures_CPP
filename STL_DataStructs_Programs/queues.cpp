//
//  queues.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "queues.h"

queues::queues()
{
    
}

void queues::insert(std::string element)
{
    q.push(element);
}

void queues::delete_element(std::string element)
{
    element = q.front();
    q.pop();
}

void queues::size_of_queue()
{
    std::cout<<"Size of queue : "<<q.size()<<std::endl;
}

void queues::get_first()
{
    std::cout<<"First element = "<<q.front()<<std::endl;
}

void queues::get_last()
{
    std::cout<<"Last element = "<<q.back()<<std::endl;
}