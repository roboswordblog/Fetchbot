# Fetchbot
This is a robot that fetches stuff and brings it back to you.
### This will be split into 3 parts:
  1. Parts
  2. The Wiring
  3. Making the chasis
  4. The coding
  5. What's next
## Parts
1. Rasbperry pi
2. Arduino
3. L298n
4. 2 DC Motors
5. A lot of cardboard, and some plastic parts
6. 6 servos
7. A lot more of cardboard
8. A screwdriver
9. A lot of wires
10. A usb connecter
11. A mini breadboard
12. A battery case with 4 AA batteries
## The wiring for the robot hand
1. Connect the raspberry pi to the arduino using the usb cable
2. Connect the raspberry pi 5 to all the nessesary prerequisitories.
3. Connect the GND to a gnd row, and a 5v to a 5v row
4. For all the servos, connect their gnds to the gnd row
5. For all the servos, also connect all their 5vs to the 5vs row
6. Then for each servo, connect it to their own pwm pin.
## The wiring for the wheels
1. Connect the battery 5v to the middle pin of the l298n where it has 3 Screw terminal blocks.
2. Next to it, connect the GND of the raspberry pi and the battery gnd
3. On the other side of it, connect the raspberry pi 5v to it.
4. Screwdrive them all in, and make sure that they are secure
5. There are 2 Screw terminal blocks on each side of the l298n, and each one is for each motor.
6. Put 1 wire in each one of the Screw terminal blocks, and screwdrive them in
7. Then, connect those wires to each of the motors, with the ones on the same side going to the same motor.
8. Now, connect all the open wired pins to the raspberry pi.
   #### All of the wires are done now.
