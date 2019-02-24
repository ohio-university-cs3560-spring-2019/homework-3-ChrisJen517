#   Christian Jensen
#       February 13th, 2019
#       This is project Euler # 1, finding all numbers that are multiples of
#       3 or 5 that are less than 1000 and then finding their sum


print(' All of the multiples of 3 or 5 that are less than 1000 are: ')
total = 0
for i in range(1, 1000):
        if(i % 3 == 0):
                print(' ', i)
                total += i
        elif(i % 5 == 0):
            print(' ', i)
            total += i
print(' The sum of all of the multiples of 3 or 5 is: ', total)
