#!/usr/bin/python3
"""Defines a file-writing function."""


def number_of_lines(filename=""):
    with open(filename, "r", encoding="UTF-8") as f:
        return len(list(f))
