from math import log2
letters = [
    ("О", 10983),
    ("И", 7367),
    ("Т", 6318),
    ("Р", 4746),
    ("Л", 4343),
    ("М", 3203),
    ("П", 2804),
    ("Я", 2001),
    ("Ы", 1898),
    ("Г", 1687),
    ("Б", 1592),
    ("Й", 1208),
    ("Ш", 718),
    ("Ю", 638),
    ("Щ", 361),
    ("Ф", 267),
    ("Е", 8483),
    ("А", 7998),
    ("Н", 6700),
    ("С", 5473),
    ("В", 4553),
    ("К", 3486),
    ("Д", 2997),
    ("У", 2615),
    ("Ь", 1735),
    ("З", 1641),
    ("Ч", 1450),
    ("Х", 996),
    ("Ж", 940),
    ("Ц", 486),
    ("Э", 331),
    ("Ъ", 37),
    ("Ё", 13)
]

name = "ЕРМАКОВОЛЕГИГОРЕВИЧ"
nres = 0
mres = log2(33) * len(name)
for i in name:
    for j in letters:
        if j[0] == i:
            nres += log2(99999 / j[1])
print(nres, mres)

def pseud_sort(arr):
    if len(arr) < 2:
        return arr
    elif len(arr) == 2:
        return [[arr[0]], [arr[1]]]
    else:
        cur_sums = [0, 0]
        ret = [[], []]
        for i in range(len(arr)):
            if cur_sums[0] < cur_sums[1]:
                ret[0] += [arr[i]]
                cur_sums[0] += arr[i][1]
            else:
                ret[1] += [arr[i]]
                cur_sums[1] += arr[i][1]
        arr = ret
        arr[0] = pseud_sort(arr[0])
        arr[1] = pseud_sort(arr[1])
        return arr


letters[0] = pseud_sort(letters)

def print_big_thing(arrr, layer=""):
    if type(arrr) is tuple:
        print(layer, *arrr)
    else:
        print_big_thing(arrr[0], layer+"0")
        try:
            print_big_thing(arrr[1], layer + "1")
        except:
            pass

print_big_thing(letters)



