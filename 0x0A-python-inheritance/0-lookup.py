#!/usr/bin/python3
"""s defines an object attribute lookup function."""


def lookup(obj):
    """This function returns a list of an object's available attributes."""
    return (dir(obj))
