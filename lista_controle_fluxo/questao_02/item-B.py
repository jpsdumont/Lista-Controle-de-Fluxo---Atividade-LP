k = 4  

match k:
    case 1 | 2:
        j = 2 * k - 1
    case 3 | 5:
        j = 3 * k + 1
    case 4:
        j = 4 * k - 1
    case 6 | 7 | 8:
        j = k - 2
    case _:
        j = None  

print(f"j = {j}")