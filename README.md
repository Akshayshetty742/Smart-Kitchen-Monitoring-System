🔥 Smart Kitchen Monitoring System
📌 Project Overview

The Smart Kitchen Monitoring System is an IoT-based safety solution designed to monitor kitchen conditions in real-time using multiple sensors.
It helps in preventing accidents like fire hazards, gas leaks, and unattended kitchen activity by providing instant alerts.

🎯 Objectives
To enhance kitchen safety using automation
To detect fire, smoke, and human presence
To provide instant alerts using a buzzer
To implement an energy-efficient lighting system
⚙️ Components Used
🔹 Arduino Board
🔹 PIR Sensor (Motion Detection)
🔹 Flame Sensor
🔹 Smoke/Gas Sensor
🔹 Buzzer
🔹 LED (Light Indicator)
🔧 System Working
🔥 Safety Priority Logic
If flame is detected → 🚨 Buzzer turns ON
If smoke/gas is detected → 🚨 Buzzer turns ON

👉 These conditions have higher priority over all other operations.

💡 Normal Operation
If no danger is detected:
Motion detected → 💡 Light turns ON for 6 seconds
No motion → Light turns OFF
🧠 Code Logic Explanation
The system continuously reads sensor values using digitalRead()
Uses conditional statements (if-else) for decision making
Implements time-based control using millis() instead of delay
Follows a priority-based safety mechanism:
Flame/Smoke → Immediate alert
Else → Motion-based lighting
🔄 Algorithm / Flow
Start the system
Read sensor values (PIR, Flame, Smoke)
If flame detected → Activate buzzer
Else if smoke detected → Activate buzzer
Else check motion:
If motion detected → Turn ON LED for 6 seconds
Else → Turn OFF LED
Repeat continuously
🚨 Features
✅ Real-time fire detection
✅ Gas and smoke alert system
✅ Automatic lighting control
✅ Priority-based safety mechanism
✅ Low-cost and efficient design
🎥 Project Demonstration

👉 Watch Working Video

📂 Source Code

The complete Arduino code is available in this repository:
📄 smart_kitchen.ino

📈 Future Enhancements
📱 Mobile app notification (IoT integration)
🌐 Cloud monitoring system
🔔 SMS/Call alert system
💨 Automatic exhaust system
📌 Conclusion

This project successfully demonstrates how embedded systems and sensors can be used to improve kitchen safety.
It provides real-time monitoring and alert mechanisms, making it a reliable and practical solution for modern homes.
