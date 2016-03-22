//
//  queues.h
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#ifndef __STL_DataStructs_Programs__queues__
#define __STL_DataStructs_Programs__queues__

#include <stdio.h>
#include <stdio.h>
#include <queue>
#include <string>
#include <iostream>

class queues
{
public:
    queues();
    void insert(std::string element);
    void delete_element(std::string element);
    void size_of_queue();
    void get_first();
    void get_last();
private:
    std::queue<std::string> q;
};
#endif /* defined(__STL_DataStructs_Programs__queues__) */
