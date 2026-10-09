import math

a, b = map(float, input("Masukkan A dan B: ").split())

tinggi = a
alas = math.sqrt(b**2 - a**2)
keliling = alas + tinggi + b
luas = alas * tinggi / 2

print(f"Alas = {alas:g} cm")
print(f"Tinggi = {tinggi:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")