from random import choice

# types: 0 2 3
#
discard = [choice([0, 2, 3]) for i in range(3)] + [0, 1]  # 3 challenges +

for days in range(99999):
    # new day: setting same random for rolls and missions for consistency

    # complete 3s,
    cmp = 1
    while 3 in discard[0:3]:
        discard[discard.index(3)] = -1
        discard[3] += 3
        cmp = 0
    # if no 3's and full - complete max
    if cmp and not(-1 in discard):
        discard[3] += max(discard[0:3])
        discard[discard[0:3].index(max(discard[0:3]))] = -1

    # new day, new challenge, new roll
    discard[discard.index(-1)] = choice([0, 2, 3])
    discard[4] = 1

    # first we roll the 0s
    for i in range(3):
        if discard[4] and discard[i] == 0:
            discard[i] = choice([2, 3])
            discard[4] = 0

    # then we roll a 2500
    if discard[4]:
        for i in range(3):
            if discard[4] and discard[i] == 2:
                discard[i] = choice([0, 3])
                discard[4] = 0

print("s", *discard)
