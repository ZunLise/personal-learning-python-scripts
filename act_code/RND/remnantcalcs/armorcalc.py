# categories: 25, 50, 75, 76+
# flop: leto leto leto labyrinth
# heavy
# medium
# light

heW = [0, 2, 3, 4, 5, 6, 7, 8, 13]  # 9
heA = [0, 5, 7, 9, 10, 11, 12, 15, 33]
boW = [0, 9, 16, 17, 19, 27, 30, 44]  # 8
boA = [0, 36, 45, 46, 48, 57, 59, 107]
leW = [0, 6, 8, 9, 13, 14, 23]  # 7
leA = [0, 20, 22, 25, 26, 29, 55]
glW = [0, 2, 3,  6, 10]  # 5
glA = [0, 6, 9, 11, 25]

for category in range(100):
    weight = 999
    armor = 0
    res = []
    for he in range(9):
        for bo in range(8):
            for le in range(7):
                for gl in range(5):
                    tempArmor = heA[he] + boA[bo] + leA[le] + glA[gl]
                    tempWeight = heW[he] + boW[bo] + leW[le] + glW[gl]
                    if (tempArmor > armor and tempWeight < category) or (tempArmor == armor and tempWeight <= weight):
                        armor = tempArmor
                        weight = tempWeight
                        res = [he, bo, le, gl]
    print(*res, armor, weight)

