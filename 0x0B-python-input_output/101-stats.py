#!/usr/bin/python3
"""Reads from standard input and computes metrics"""


if __name__ == "__main__":
    import sys

    stdin = sys.stdin

    a = 0
    size = 0
    c_valid = ['200', '301', '400', '401', '403', '404', '405', '500']
    c_status = {}

    try:
        for line in stdin:
            if a == 10:
                print("File size: {}".format(size))
                for i in sorted(status):
                    print("{}: {}".format(i, status[i]))
                a = 1
            else:
                a = a + 1

            line = line.split()

            try:
                size = size + int(line[-1])
            except (IndexError, ValueError):
                pass

            try:
                if line[-2] in valid:
                    if status.get(line[-2], -1) == -1:
                        status[line[-2]] = 1
                    else:
                        status[line[-2]] = status[line[-2]] + 1
            except IndexError:
                pass

        print("File size: {}".format(size))
        for i in sorted(status):
            print("{}: {}".format(i, status[i]))

    except KeyboardInterrupt:
        print("File size: {}".format(size))
        for i in sorted(status):
            print("{}: {}".format(i, status[i]))
        raise
