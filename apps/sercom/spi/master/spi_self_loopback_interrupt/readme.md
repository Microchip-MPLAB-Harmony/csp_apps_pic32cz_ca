---
parent: Harmony 3 peripheral library application examples for PIC32CZ CA80/CA80 family
title: SERCOM SPI interrupt
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# SERCOM SPI interrupt

This example application shows how to use SERCOM SPI PLIB with external loop back to write and then read back an array of data in interrupt mode.

## Description

This example shows the transmit and receive operation over a SPI interface in a non-blocking manner. The peripheral interrupt is used to manage the transfer. It transmits an array of values and verifies the value transmitted by receiving the values back with look back and comparing it to the value transmitted. The loop back test requires the MOSI output pin to be connected to the MISO input pin so that anything transmitted will also be received.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/sercom/spi/master/spi_self_loopback_interrupt/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cz_ca80_curiosity_ultra.X    | MPLABX Project for [PIC32CZ CA80 Curiosity Ultra board]()|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cz_ca80_curiosity_ultra.X    | [PIC32CZ CA80 Curiosity Ultra board]()|
|||

### Setting up [PIC32CZ CA80 Curiosity Ultra board]()

- Use a jumper wire to short pin 16 and pin 17 of the EXT1 header
- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and Program the application project using its IDE
2. LED indicates the success or failure:
    - The LED is turned ON when the received value matches with the transmitted value
    - The LED is turned OFF when the received value does not match with the transmitted value
3. SPI data transfer and compare match checking happens only one time

The following table shows the LED name:

| Board      |LED Name   |
| ---------- | ----------- |
| [PIC32CZ CA80 Curiosity Ultra board]()    | LED0 |
||||
