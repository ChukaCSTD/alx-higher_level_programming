#!/usr/bin/python3
"""MyList module inherits inherits from the list class"""


class MyList(list):
    """MyList class - Inherits from list"""
    def print_sorted(self):
        """Prints a sorted list"""
        print(sorted(self))
