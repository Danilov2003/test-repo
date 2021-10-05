import  RPi.GPIO as GPIO 
import time

dac = [26,19,13,6,5,11,9,10]
#leds = [21, 20, 16, 12, 7, 8, 25, 24]
bits = len(dac)
comp = 4
levels = 2** bits
maxVoltage = 3.3
troykaModule = 17

def decimal2binary(value):
    return[int(bit) for bit in bin(value)[2:].zfill(8)]


def num2dac(value):
    signal = decimal2binary(value)
    GPIO.output(dac,signal)
    return signal

def findbinary(a, b):
    if (b-a > 1):
        signal = num2dac(int(a + int((b-a)/2)))
        time.sleep(0.001)
        compvalue = GPIO.input(comp)
        if (compvalue == 0 ):
            findbinary(a, a + int ((b-a)/2))
        else:
            findbinary(a + int ((b-a)/2), b)
    else:
        signal = num2dac(int(a + int((b-a)/2)))
        voltage = (a/levels)*maxVoltage
        indicator(voltage)
        print("Digital value = {:^3} -> {},  analog voltage = {:.2f}".format(a,signal,voltage))

def indicator (voltage):
    p = int((voltage/maxVoltage)*10)
    sig = int(2**(p-1) - 0.5)
    out_sig = decimal2binary (sig)
    #GPIO.output(leds, out_sig)

GPIO.setmode(GPIO.BCM)
#GPIO.setup(leds, GPIO.OUT, initial = GPIO.LOW)
GPIO.setup(dac,GPIO.OUT , initial = GPIO.LOW)
GPIO.setup(troykaModule, GPIO.OUT, initial = GPIO.HIGH)
GPIO.setup(comp,GPIO.IN)
GPIO.setwarnings(False)

try:
    while True:
        findbinary(0, 256)
        time.sleep(0.1)
except KeyboardInterrupt:
    print("The program was stopped by the keyboard")
else:
    print ("No exeptions")
finally:
    GPIO.output(dac, GPIO.LOW)
    GPIO.cleanup(dac)
    print("GPIO cleanup completed")
    