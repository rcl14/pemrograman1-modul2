import math

jari_jari, tinggi = map(float, input().split())
volume = math.pi *jari_jari**2 * tinggi
luas = 2 * math.pi * jari_jari * (jari_jari + tinggi)
keliling = 2 * math.pi * jari_jari 
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")