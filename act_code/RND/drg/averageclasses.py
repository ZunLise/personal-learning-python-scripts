allparties = ["brrrbbbgrrbgbrynygrgbrbygbgrybygbgggb",
              "rybrrbybbrbrgyrgbbgrrgbgryygbbbgyyrbgr",
              "brgrbgrbrbbggryrygyr",
              "brrbbgbyrgyggbbygrrrbryggr",
              "ybyybbgryrgrbryrbgyrbggy",
              "yyrbrrrrybyyg",
              "grggbbbgrybrg"]

classes = [0] * 4

# driller engineer gunner scout

for party in allparties:
    classes[0] += party.count("y")
    classes[1] += party.count("r")
    classes[2] += party.count("g")
    classes[3] += party.count("b")

print(classes)
print("driller engineer gunner scout")
