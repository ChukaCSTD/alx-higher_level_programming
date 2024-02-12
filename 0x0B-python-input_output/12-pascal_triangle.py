#!/usr/bin/python3
"""Defines a Pascal's Triangle function."""


def pascal_triangle(n):
    '''
    returns a list of lists of integers representing
    the Pascal’s triangle of n
    '''

    triangle = [[1], [1, 1]]
    if n <= 0:
        return []

    if n == 1:
        return [[1]]

    for t in range(3, n + 1):
        b4 = []
        afta = triangle[-1]
        for i in range(len(afta)- 1):
            sum_ = afta[i] + afta[i + 1]
            t.append(sum_)
        t.insert(0, 1)
        t.append(1)
        triangle.append(t)
    return triangle
