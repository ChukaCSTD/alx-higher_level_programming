#!/usr/bin/python3
"""Defines a text file insertion function."""


def append_after(filename="", search_string="", new_string=""):
    '''inserts new_string to a file, after find containing search_string'''
    with open(filename, "r+") as f_object:
        lines = f_object.readlines()
        changed = []
        for i in range(len(lines)):
            changed.append(lines[i])
            if search_string in lines[i]:
                changed.append(new_string)

        f_object.seek(0)
        f_object.write("".join(changed))
