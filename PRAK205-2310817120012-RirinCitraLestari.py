import math
A, B = map(float,input().split())
C = math.sqrt(A**2 + B**2)
alas = B
tinggi = A
keliling = A + B + C
luas = 0.5 * A * B
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")