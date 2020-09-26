# lcm of two numbers

def lcm(x, y):
    if x > y:
        g = x
    else:
        g = y

    while True:
        if (g % x == 0) and (g % y == 0):
            lcm = g
            break
        g += 1
    return lcm
