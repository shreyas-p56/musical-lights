# the extension .pyw lets the script run in background

from pynput.keyboard import Listener, Key
import serial

arduino = serial.Serial(port = 'COM3', baudrate = 115200, timeout = 0.01)
# Sets up the serial data communication from this script to the Arduino
# through Serial data


def write(x):
    arduino.write(bytes('0', 'utf-8'))  # sends a non-empty serial input to the Arduino

def on_press(key):
    if key == Key.esc:
        print("Program halted")         # lets the user know that the program has stopped running
        return False                    # stops the program
    print("{0} pressed".format(key)) 
    write(key.char)                     # calls the write function if the key pressed is a character



def on_release(key):
    pass                                #do nothing on key release

if __name__ == "__main__":

    with Listener(on_press=on_press, on_release=on_release) as listener:
        listener.join()
    # starts the Listener which detects what keys are pressed and released