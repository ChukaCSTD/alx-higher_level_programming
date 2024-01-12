#!/usr/bin/python3
def search_replace(my_list, search, replace):
    lst = []
    for i in range(len(my_list)):
        if my_list[i] == search:
            lst.append(replace)
        else:
            lst.append(my_list[i])
    return lst
