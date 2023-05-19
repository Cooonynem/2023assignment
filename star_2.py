for line in range(9, -1, -1):
    for blank in range(line):
        print(' ', end='')
    for star in range(10 - line):
        print('*', end='')
    print()
