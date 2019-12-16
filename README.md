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

Keep in mind that you need a soldering iron, cables to connect the taster and maybe some hot glue. I also used a 3d printed housing for the usb connector.

## Guide 
### Preparing your Arduino
Please read the [guide at Sparkfun](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/all) for how to setup the Arduino Pro Micro.

<b>Install libraries</b>

You need to install the [USBMIDI library](https://github.com/BlokasLabs/USBMIDI).

<b>Flashing</b>

Load the Arduino project from this github and flash it to the Arduino.

<b>Change pin / MIDI note</b>

If you want to change the pin of the taster or the MIDI note, just change the following variables.

```C
/*
 * SETUP [START]
 */
const int iBUTTON_PIN = 9;
const int iBUTTON_NOTE = 64;
/*
 * SETUP [END]
 */
 ```


### Wireing the buzzer
It is really simple, just connect as follows:

<img src="https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/raw/master/wireing.png" width="250">

### Setup in Resolume
The Arduino will automaticly register as a MIDI controller. In Resolume go to preferences -> MIDI and activitate the input. After that you can map your actions like shown in the [Resolume documentation](https://resolume.com/support/midi-shortcuts).

## Ideas & basic notes
* The midi note can only be changed while programing the Arduino. Maybe i add a dip switch or a rotary encoder to setup the note and use multiple buzzers.
* The Arduino could be used for more than one buzzer. Or taster. Or Poti. Use it for whatever you want.
* WLAN/OSC version comming soon.

## Enjoy!
<img src="https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/raw/master/fun.gif" width="250">

Please consider to buy me a [coffee](https://www.buymeacoffee.com/marvyn).

## Disclaimer
Use on your own risk!
