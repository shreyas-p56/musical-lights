# musical-lights
Converting musical notes based on key presses on a virtual piano to animation on an 8x8 LED Matrix via Arduino

This is a very basic model of the project a friend and I made for our course on Microprocessors
The .pyw file should be running in the background, it detects key presses and relays the information to the Arduino, and the program halts if the escape key is pressed. You'll have to modify the lights.ino code if you want to implement custom animations based on musical notes, which we didn't include in this code because it the functions and mapping vary with each virtual piano website, and with different models of the LED system to which the Arduino sends electric signals.
