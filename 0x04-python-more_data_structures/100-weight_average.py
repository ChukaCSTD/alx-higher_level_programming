#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0
    average = 0
    diff = 0
    for j in my_list:
        average += j[0] * j[1]
        diff += j[1]
    return float(average / diff)
