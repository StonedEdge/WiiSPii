# The Wii SPii (A custom GBA SP themed portable gaming console) 
![Image of Wii SPii](https://i.imgur.com/MtVTQXH.jpg)

## Description
The Wii SPii is an open source, portable Wii project by StonedEdge from the BitBuilt forums. It uses real Wii hardware with no emulation and lasts around 2.5 hours on a full charge. This repository includes includes code from several contributors to the hobby (Aurelio, Gmanmodz and Jefflongo), 
CAD files, gerbers for main PCB ordering and a BOM of parts for assembly. I plan to include a guide for assembly here at a later stage. The main build worklog can be found [here:](https://bitbuilt.net/forums/index.php?threads/the-wii-spii.3347/)

### Code 
The code used in this project is based on the RVL-PMS (Gman), GC+ 2.0 (Aurelio92) and STUSB4500 (jefflongo) source code from below contributors, with minor tweaks being made to suit my project needs. All credit goes to contributors and I take no credit in their work whatsoever, I simply took their contributions and made slight changes. The project code is in the form of an MPLAB X project and can be compiled using MPLAB X IDE with XC8 compiler. Alternatively, you can also use the pre-compiled program (.hex) to program the PIC16LF15324, PIC16F15324 and PIC18F25K42 with MPLAB IPE. The microcontrollers were programmed using a PICKit 3. The only code that you will need to adjust and then compile is the lines 71-74 Lmin, Lmax, Rmin and Rmax values in config.c, in order to scale the analog triggers to the correct values after reading the initial ADC values when the triggers are depressed and pressed. Code is located in the zip files. 

### CAD
The CAD files for the Wii SPii project can be found here. The case was designed with CNC manufacturing in mind and can be machined with little issue. I may include the toolpathing files at a later date, but have decided not to for now. I have uploaded both the .STEP and .STL files so that people may easily make changes to the model in their CAD software of choice, or simply print the case on any 3D printer. Prototypes were made on the Prusa i3 MK3s FDM printer and the final design was completed on a 3-axis CNC machine in acrylic plastic. I will not be taking any requests for CNC cases. 

### PCB
The PCB is a 4 layer PCB ordered from JLCPCB. The PCB can also be ordered from OSHPark or PCBway, however due to increased cost for 4-layer PCB, I would recommend ordering directly from JLCPCB for quick turnaround. A stencil is also required for ease of assembly along with solder paste and hot air to assemble the boards. I made a 3D printable stencil jig that can be used for easy placement of the stencil and PCB that I have included within the CAD zip files above. 

### BOM (Bill of Materials) 
These are the required components you will need to build the Wii SPii. This includes the PCB itself, PCB components and other peripherals required to make the console. It can be found [here:](xxx)

### Contributors 
I'd like to thank these people in no particular order for the awesome work you have done to help me complete this project. A link to their GitHub repositories can be found below. 

* Dmcke5 for helping me re-model the WiiSPii for CNC machining, CNC machining the case out of acrylic and of course the hours and hours of phone calls back and forth over the past few months. Thanks for putting up with my numerous questions on CNC
* [Gman](https://github.com/Gmanmodz) for providing the community with countless hours of research and sharing his code to allow me to make some small modifications to the LED interface and audio amplifier
* [Aurelio](https://github.com/Aurelio92) for GC+ 2.0 and BBloader Wii GUI contributions and updates
* robertlong13 for assisting in the PIC16LF15324 ADC modifications for using 10K pot for volume control over i2c
* [JeffLongo](https://github.com/jefflongo) for his STUSB4500 code revisions 
* YveltalGriffin for suggesting various hardware changes and reviews to PCB/schematics 
