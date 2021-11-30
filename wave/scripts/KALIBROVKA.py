#import math
import matplotlib.pyplot as plt
import numpy as np

#y = [1147, 1553, 1910, 2115, 2227]
#x = [20, 40, 60, 80, 100]


#plt.errorbar(x, y, xerr=0, yerr=0, marker='.', ls="")
#k = np.polyfit(x, y, 1)

#print("Угол наклона:")
#print(k)

#y_ = np.polyval(k, x)
#plt.plot(x, y_, 'c-')
#plt.tick_params(axis='both', which='major', labelsize=6)
#plt.title("График калибровки ", fontsize = 14)
#plt.ylabel("Показания датчика АЦП",  fontsize = 8) # ось абсцисс
#plt.xlabel("Высота столба жидкости, мм",  fontsize = 8) # ось ординат
#plt.grid()
#plt.savefig('график_1')
#plt.show()

f = open('C:\\Users\\Иван Данилов\\Desktop\\wave\\20exp.txt')
a = f.split()
print(f)
