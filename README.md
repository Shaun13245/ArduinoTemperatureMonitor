Development
# 40563189 Shaun Britz
# arduino-ds18b20-temperature-sensor


# Background:
-- A small microcontroller called an ARDUINO is best suited for industrial applications. They run on c++ or a version thereof.


# brief goal:
(40563189) The code will read temperature of Air/Liquid on a DS18B20 temperature sensor, and display it on a LCD

# Problem to solve: 
In an ever-growing industrial industries, information is key, 
Company ABC is struggling to get accurate temperature data of a compressed air line (This is key as higher temperature may cause damage to machinery, or even indicate that maintenance is needed)
The problem is that compressed air systems have thick steel pipes, and feeling it by hand, might not give a true indication of the temperature, nor is it safe.
Internet connection is not widely available on industrial plants, and cloud connected devices may not function reliably.

# The solution
find an opening in the compressed air line.
Connect an Any Arduino (Mini --> Mega) to a Dallas DS18B20 waterproof temperature sensor (Yes, compressed air may be wet if not passed through an air dryer), and an industrial LCD.
The Arduino will do an initial setup, and then infinitely loop through the reading cycle, each time reading the temperature, and displaying it on the LCD (Updates every 500ms). 

Authorised staff, will now be able to see the temperature of the pipeline, and instantly know if there is an problem. 
