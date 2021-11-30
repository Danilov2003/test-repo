import bloodFunctions as b
import matplotlib.pyplot as plt
import time

b.initSpiAdc()


data = []
count = 0
start = time.time()
timebreak = start
while (timebreak - start) < 60:
        value = b.getAdc()
        count = count + 1
        data.append(value)
        timebreak = time.time()

b.save(data, 0, count)     


