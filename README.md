# ResolumeUSBMidiBuzzer
<img src="https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/raw/master/buzzer.jpg" width="250" align="right">

I wanted a buzzer which can be used as a USB midi controller in [Resolume Arena](https://www.resolume.com). So i created this simple project based on an Arduino Pro Micro and using some sample code from the [USBMIDI library](https://github.com/BlokasLabs/USBMIDI). The whole hardware fits in one of this big red/black industrial buzzers (in Germany we call it "Grobhandtaster").

It's really simple and i didn't invent something new. But i thought i could be a useful and fun project for some of you guys.


## BOM
| Description       | Quantity  |   Comment         
| :------------- |:-------------:|:-------------|
| Arduino Pro Micro    | 1 |	You need an Arduino with native USB support (for example ATmega32U4). I used a china copy of the Pro Micro.  
| Some kind of buzzer / taster     | 1 | I used an Eaton 229749.
| USB B -> USB A keystone module | 1  |   Cause the USB connector on the controller is fragile.
| short flexible USB A -> MicroUSB cable| 1     |  For connection between controller and keystone module.
| USB A -> USB B cable| 1     |  For connection between buzzer (keystone module) and your computer.

Costs really depends on where you source your Arduino and which taster you use. 

I think i payed a total of 50€ - this includes 35€ for the taster.

Keep in mind that you need a soldering iron, cables to connect the taster and maybe some hot glue.
## Guide 
### Preparing your Arduino
todo 
link to sparkfun guide

### Wireing the buzzer
wireing diagram keystone module 

<img src="https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/raw/master/wireing.png" width="250">

### Modifications
using potis or more than one taster

### Having some fun
<img src="https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/raw/master/fun.gif" width="250">

## Ideas & basic notes
dip switch for note change?
two controller possible?

## Disclaimer
put some warnings here
