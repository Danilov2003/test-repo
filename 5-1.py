import  RPi.GPIO as GPIO 
import time
def decimal2binary(decimal):
    return[int(bit) for bit in bin(decimal)[2:].zfill(bits)]

def bin2dac(value):
    signal = decimal2binary(value)
    GPIO.output(dac,signal)
    return signal


dac = [26,19,13,6,5,11,9,10]
bits = len(dac)
comparator = 4
levels = 2** bits
maxVoltage = 3.3
troykaModule = 17
GPIO.setmode(GPIO.BCM)
GPIO.setup(dac,GPIO.OUT , initial = GPIO.LOW)
GPIO.setup(troykaModule, GPIO.OUT, initial = GPIO.HIGH)
GPIO.setup(comparator,GPIO.IN)
def adc():
    for value in range(256):
        signal = bin2dac(value)
        voltage = value/ levels * maxVoltage
        time.sleep(0.0009)
        comparatorValue = GPIO.input(comparator)
        if comparatorValue == 0:
            print("Digital value = {:^3} -> {}, analog value = {:.2f}".format(value,signal,voltage))
            break



try:
    while True:
        adc()
except KeyboardInterrupt:
    print("The program was stoped by the keyboard")
    
else:
    print("No exceptions")
finally:
    GPIO.output(dac, GPIO.LOW)
    GPIO.cleanup(dac)
    print("GPIO cleanup completed")