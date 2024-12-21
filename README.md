# Reverse Ducky - Bad USB with ATTINY85

![Attiny85](https://github.com/user-attachments/assets/53e0057f-be2d-4633-b9cb-5ea2245c75a5)

## Overview

**Reverse Ducky** is a versatile Bad USB project powered by the ATTINY85 microcontroller. It functions as a USB HID device capable of executing pre-programmed scripts or commands when plugged into a target machine. This project is inspired by USB Rubber Ducky but is designed for budget-friendly and DIY enthusiasts.

---

## Features

- **HID Functionality**: Acts as a keyboard to inject commands into a target device.
- **Compact Design**: Fits easily into small USB enclosures.
- **Custom Scripts**: Fully programmable using Arduino IDE.
- **Cost-Effective**: Built using the affordable ATTINY85 microcontroller.

---

## Prerequisites

Before you start, ensure you have the following:

- An ATTINY85 microcontroller.
- Arduino IDE installed on your computer.
- USB-to-serial adapter or similar programmer.
- DigiKeyboard library for Arduino (used for USB HID functionality).

---

## Installation

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/reverse-ducky.git
   cd reverse-ducky
   ```

2. Install the required libraries in the Arduino IDE:

   - **DigiKeyboard** library: Install via Arduino Library Manager or [download here](https://github.com/digistump/DigistumpArduino).

3. Connect your ATTINY85 to your computer using a USB-to-serial adapter.

4. Open the `reverse_ducky.ino` file in Arduino IDE.

5. Upload the script to the ATTINY85.

---

## Usage

1. Plug the Reverse Ducky into the target machine's USB port.
2. It will execute the predefined commands or script automatically.
3. To change the script, modify the `reverse_ducky.ino` file and re-upload it.

---

## Bootloader Setup

Ensure that the ATTINY85 has the correct bootloader installed to enable USB functionality. Follow the bootloader tutorial below for a step-by-step guide:

[https://github.com/Rimurudemon/Attiny85-Bootloader-Tutorial]

---

## Customization

- Modify the `DigiKeyboard.sendKeyStroke` and `DigiKeyboard.print` commands in the script to implement your custom payload.
- Use delays as necessary to ensure proper execution on the target system.

---

## Disclaimer

This project is for educational purposes only. Use it responsibly and do not engage in unethical activities. The creator is not responsible for any misuse.

---

## Contributing

Contributions are welcome! Feel free to fork the repo, make improvements, and submit a pull request.

---

## License

This project is licensed under the [MIT License](LICENSE).
