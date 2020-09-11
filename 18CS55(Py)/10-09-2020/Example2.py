import cmath
a, b, c = input('Enter a, b , c')
desc = b ** 2 - (4*a*c)

if desc == 0:
    print('the roots are {} and {}'.format(-b/(2*a), -b/(2*a)))
elif desc < 0:
    print('No roots exist')
else:
    root1 = (-b + cmath.sqrt(desc))/(2*a)
    root2 = (-b - cmath.sqrt(desc))/(2*a)
    print('The roots are {0} and {1}'.format(root1, root2))
