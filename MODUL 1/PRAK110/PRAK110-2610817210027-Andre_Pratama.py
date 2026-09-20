import math

print("Diketahui :")

Base = 5
Height = 12
print("Alas =", Base, "cm")
print("Tinggi =", Height, "cm")

SideA = Height
SideC = Base
SideB = math.sqrt(SideA**2 + SideC**2)

Length = SideA + SideB + SideC
Area = 0.5 * Base * Height

print("\nJawab : ")
print("Sisi A =", SideA, "cm")
print("Sisi B =", int(SideB), "cm")
print("Sisi C =", SideC, "cm")
print("Keliling =", int(Length), "cm")
print("Luas =", int(Area), "cm")