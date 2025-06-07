# AtomS3R-RS232-Base-Video-code-and-resources
Sample code and Pinout diagram for the youtube video discussing RS-232 communication on the M5Stack AtomS3R with Atomic RS232 Base

Youtube Video
https://www.youtube.com/watch?v=Noiei7ue4Jk

YouTube video is based on the ATOM Lite ESP32 IoT Development Kit. But if you're working with the AtomS3R, be sure to update the GPIO numbers in the code to match the AtomS3R pinout.

## Clarifying GPIO Usage on ATOM Lite vs AtomS3R with RS232 Base

The ATOM Lite ESP32 IoT Development Kit uses GPIO22 (TX) and GPIO19 (RX) for serial communication. These pins are also labeled as such on accessories like the RS232 Base, which was originally designed with the ATOM Lite in mind.

However, with the AtomS3R, the situation changes. This board uses GPIO5 (TX) and GPIO6 (RX) for UART communication instead.

Here’s where it gets confusing for new users:

* The RS232 Base still labels its serial lines as TX19 and RX22, matching the ATOM Lite.

*  AtomS3R does not have GPIO22 or GPIO19 exposed, so those labels don't match up with the actual pins used on the AtomS3R.

*  Despite the label mismatch, the RS232 Base is compatible with AtomS3R, but the serial lines are routed differently under the hood.

# For Beginners:
If you're using AtomS3R with the RS232 Base, ignore the TX19/RX22 labels. Instead, your UART communication happens through GPIO5 (TX) and GPIO6 (RX).

![AtomS3R](https://m5stack-doc.oss-cn-shenzhen.aliyuncs.com/680/C126_PinMap_01.jpg "AtomS3R")
![AtomLite](https://m5stack-doc.oss-cn-shenzhen.aliyuncs.com/673/C008_PinMap_01.jpg "AtomLite")
![AtomicRS232Base](https://static-cdn.m5stack.com/resource/docs/products/atom/Atomic%20RS232%20Base/img-9e1d7b17-ff71-4099-b13c-22f3a5baf48e.webp "AtomicRS232Base")

