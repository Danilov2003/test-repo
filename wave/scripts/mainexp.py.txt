import waveFunctions as b
import matplotlib.pyplot as plt
import time

b.initSpiAdc()

b.waitForOpen()
data = []
count = 0
start = time.time()
timebreak = start
while (timebreak - start) < 20:
        value = b.getAdc()
        count = count + 1
        data.append(value)
        timebreak = time.time()

b.save(data, 0, count)         
          
          