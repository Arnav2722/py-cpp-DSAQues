n = int(input("Enter a number for n:- "))

i = 1

while i <= n:
    j = 1
    value = i
    while j <= i:
        print(value, end=" ")
        value += 1
        j += 1
    print()
    i += 1
