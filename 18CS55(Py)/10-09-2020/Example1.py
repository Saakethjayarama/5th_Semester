n = int(input('Enter year'))
year = n
if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
    print('Its a leap year')
else:
    print('It isnt a leap year')

# Other method

if (year % 4) == 0:
    if (year % 100) == 0:
        if(year % 400) == 0:
            print("its is a leap year")
        else:
            print('it is not leap year')
    else:
        print('Its not leap year')
else:
    print('Its not leap year')
