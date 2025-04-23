# 🌡 Dual-Mode Analog Thermometer 

As part of the **EN2091 Laboratory Practice and Projects** module (Semester 3), our team, **Voltcrew**, designed and developed a **Dual-Mode Thermometer** using analog electronic components. This project aims to provide accurate and reliable temperature measurements for both **body and liquid** modes.

---

## 🔧 Project Overview

This thermometer operates in **two selectable modes**:

- **Body Temperature Mode**
- **Liquid Temperature Mode**

The mode can be toggled manually, and future enhancements will include **MUX integration** for expanded functionality.

---

## 🔬 Key Features

- 🧠 **Dual Wheatstone Bridges**  
  Used for linearizing the input voltage from both NTC and PTC thermistors, ensuring precision in both temperature ranges.

- 🔍 **Instrumentation Amplifier**  
  Amplifies the small voltage differences from the Wheatstone bridges for further processing.

- 🌡 **Thermistors Used**  
  - **NTC 10k** for body temperature sensing  
  - **PTC 100** for liquid temperature sensing

- 🖥 **Display System**  
  An **Arduino** is used exclusively for displaying the processed temperature values on an **OLED screen**.

- ⚡ **Power Supply Unit**  
  Custom-designed unit that converts AC power to **+10V, -10V, and +5V** to power the analog circuits and Arduino.

---

## 📈 Future Improvements

- Integrating a **multiplexer (MUX)** to enable dynamic switching between multiple temperature inputs.
- Potential expansion to include environmental or surface temperature modes.



