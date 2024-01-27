#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    i = 0
    lst = []
    while i < list_length:
        result = 0
        try:
            result = my_list_1[index] / my_list_2[index]
        except ZeroDivisionError:
            print("division by 0")
        except TypeError:
            print("wrong type")
        except IndexError:
            print("out of range")
        finally:
            lst.append(result)
            i += 1
    return lst
