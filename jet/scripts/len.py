import math
import matplotlib.pyplot as plt
import numpy as np

y = [0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5]
x = [0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]


plt.errorbar(x, y, xerr=0, yerr=0, marker='.', ls="")
k = np.polyfit(x, y, 1)

print("Угол наклона:")
print(k)

y_ = np.polyval(k, x)
plt.plot(x, y_, 'c-')
plt.tick_params(axis='both', which='major', labelsize=6)
plt.title("График калибровки шага мотора", fontsize = 14)
plt.xlabel("Смещения трубки Пито, см",  fontsize = 8) # ось абсцисс
plt.ylabel("Количество шагов мотора",  fontsize = 8) # ось ординат
plt.grid()
plt.savefig('график_1')
plt.show()


 