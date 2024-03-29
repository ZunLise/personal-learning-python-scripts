from random import randint


def TenToDozen(num):
    locDigits = "0123456789ХЕ"

    conv = ""
    while num:
        conv = locDigits[num%12] + conv
        num //= 12

    return conv

working = True
digits = "0123456789ХЕ"

while working:
    a, b = randint(2, 11), randint(2, 11)
    print("what is ", digits[a], " x ", digits[b])

    check = a*b
    ans = input("> ")

    if TenToDozen(check) == ans:
        print("correct!")
    else:
        print("incorrect")

    print("\n")
