# A-bridge-circuit-converting-resistance-change-of-thermistor-into-voltage-change
This project implements a simple Arduino-based temperature measurement system using a thermistor sensor. A thermistor is a temperature-sensitive resistor whose resistance decreases (NTC type) or increases (PTC type) with temperature changes.

To convert the thermistor’s resistance variation into a measurable electrical signal, a bridge circuit (Wheatstone Bridge) is used. The bridge converts small resistance changes of the thermistor into proportional voltage changes. This voltage is then read by the Arduino’s ADC (Analog-to-Digital Converter), processed, and displayed as temperature after applying the calibration formula.

Key points:

Thermistor acts as the sensing element.

Wheatstone bridge converts resistance change → voltage change.

Arduino reads the voltage via analog input.

Temperature is calculated and displayed (Serial Monitor / LCD).
