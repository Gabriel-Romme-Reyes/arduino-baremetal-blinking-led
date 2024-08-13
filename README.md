# arduino-baremetal-blinking-led

This is only an attempt to record about my learnings from coding from arduino built-in libraries to using raw C
 
This is the sketch of the Blinking LED

![Blinking_LED_SKETCH](https://github.com/user-attachments/assets/796ddd5d-1691-49db-a441-c8f7a8a480a4)

And this is the pinout reference in where i base my variables

![arduino_pinout](https://github.com/user-attachments/assets/2648607f-6b5a-4314-a5cb-1fa0ad842e43)

I set DDRD = 128; to turn D7 / PD7 into OUTPUT
I set DDRB = 32; to turn D13 / PB5 into OUTPUT
I set DDRC = 32; to turn A5/ PC5 into OUTPUT

Then turn the PORTX into the same decimals as DDRX in order to switch it on/off

example:

 PORTD = 128;
 for(long i = 0 ; i < 1000000 ; i++){
  PORTD = 128;
 }
 
PORTD = 0;

# Resource

https://www.youtube.com/watch?v=tBq3sO1Z-7o
