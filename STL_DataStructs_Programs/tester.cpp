//
//  tester.cpp
//  STL_DataStructs_Programs
//
//  Created by Fahad Ali Khan on 22/03/16.
//  Copyright (c) 2016 MapCase Media. All rights reserved.
//

#include "tester.h"

tester::tester()
{
}

void tester::vector_test()
{
    vectors obj("vector");
    obj.insert("v1");
    obj.insert("v2");
    obj.insert("v3");
    obj.display_by_iterator();
    obj.delete_last_element();
    obj.display_by_index();
    obj.size_of_vector();
    obj.clear_all();
    obj.size_of_vector();
}

void tester::map_test()
{
    maps obj;
    obj.insert("first", 1000);
    obj.insert("second", 2000);
    obj.insert("third" , 3000);
    obj.size_of_map();
    obj.display_by_iterator();
    obj.delete_element("second");
    obj.display_by_iterator();
    obj.size_of_map();
    obj.clear_all();
    obj.size_of_map();
}

void tester::set_test()
{
    sets obj;
    obj.insert("s1");
    obj.insert("s2");
    obj.insert("s3");
    obj.size_of_set();
    obj.display_by_iterator();
    obj.delete_element("green");
    obj.display_by_iterator();
    obj.size_of_set();
    obj.clear_all();
    obj.size_of_set();
}

void tester::queue_test()
{
    queues obj;
    obj.insert("q1");
    obj.insert("q2");
    obj.insert("q3");
    obj.size_of_queue();
    obj.delete_element("q2");
    obj.size_of_queue();
}

void tester::stringfuncs_test()
{
    stringfuncs obj;
    obj.display_string();
    obj.insert_substring("...!!!!!!!!", 34);
    obj.display_string();
    obj.erase_substring(7, 34);
    obj.display_string();
    obj.append_substring("appended part of string ");
    obj.display_string();
    obj.find_substring("part of");
    obj.replace_with_substring("..Well Done..");
    obj.display_string();
}

void tester::stack_test()
{
    stacks obj;
    obj.insert("item-1");
    obj.insert("item-2");
    obj.insert("item-3");
    obj.insert("item-4");
    obj.top_element();
    obj.size_of_stack();
    obj.delete_element();
    obj.delete_element();
    obj.size_of_stack();
    obj.top_element();
};

void tester::list_test()
{
    lists obj;
    obj.insert_element_at_front("zero");
    obj.insert_element_at_front("one");
    obj.insert_element_at_front("two");
    obj.insert_element_at_front("three");
    obj.display_forward_list();
    obj.insert_element_at_end("four");
    obj.insert_element_at_end("four");
    obj.insert_element_at_end("four");
    obj.display_forward_list();
    obj.delete_element_at_front();
    obj.display_forward_list();
    obj.delete_element_at_end();
    obj.display_forward_list();
    obj.delete_element_by_value("two");
    obj.display_forward_list();
    obj.show_front_element();
    obj.show_last_element();
    obj.remove_duplicate_values();
    obj.display_forward_list();
    obj.sort_forward_list();
    obj.display_forward_list();
    obj.reverse_elements();
    obj.display_forward_list();
}





