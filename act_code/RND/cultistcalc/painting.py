from random import random, shuffle

Staleness = 0
FameRewards = [[0, 1, 2, 3, 3, 4, 4, 6, 6, 7, 7, 7],
               [0, 1, 2, 3, 3, 4, 4, 6, 6, 6, 6, 6],
               [0, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4],
               [0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3],
               [0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2],
               [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]]

for REP in range(5):
    ans = 0
    Fame = []
    for i in range(9999):
        Staleness = max(0, Staleness-1)

        for j in range(FameRewards[Staleness][REP+2]):
            if not Fame:
                Fame = ["funds"] * 12 + ["over"] * 4 + ["mistique"] * 4
                shuffle(Fame)
            if Fame[0] == "funds":
                ans += 1
            elif Fame[0] == "over":
                if REP == 0:
                    ans += 1
                else:
                    Staleness += 1
            Fame.pop(0)

    print(ans/9999, REP)






