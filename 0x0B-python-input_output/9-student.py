#!/usr/bin/python3
"""Defines a class named Student."""

class Student:
    ''' Represents the initialization of the Student class '''

    def __init__(self, first_name, last_name, age):
        ''' Constructor method '''
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        ''' Method that returns directory description '''
        return self.__dict__.copy()
