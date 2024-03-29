def damage(g, w, b):
    ret = (1 + 0.1 * g) * (1 + 0.2 * w) * (1 + 0.09 * min(b, 20))
    return ret


gwb = [0, 0, 0]
print(" g  w  b")

hey = ["glasses", "watches", "bombs"]
for i in range(100):
    dd = [damage(gwb[0] + 1, gwb[1], gwb[2]), damage(gwb[0], gwb[1] + 1, gwb[2]), damage(gwb[0], gwb[1], gwb[2] + 1)]
    x = dd.index(max(dd))
    gwb[dd.index(max(dd))] += 1

    print(*gwb, hey[x])

# 5 watches, glasses
# 2 watches, glasses
# bombs, glasses, watches
