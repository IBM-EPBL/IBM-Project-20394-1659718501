import RPi.GPIO as GPIO
import time
RED=9
AMBER=10
GREEN=11
GPIO.setmode(GPIO.BCM)
GPIO.setup(9, GPIO.OUT)
GPIO.setup(10, GPIO.OUT)
GPIO.setup(11, GPIO.OUT)
while True:
    GPIO.output(RED, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(RED, GPIO.LOW)
    GPIO.output(AMBER, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(AMBER, GPIO.LOW)
    GPIO.output(GREEN, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(GREEN, GPIO.LOW)
    GPIO.output(AMBER, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(AMBER, GPIO.LOW)