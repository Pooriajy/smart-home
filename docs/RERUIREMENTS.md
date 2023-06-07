# Project Requirements
### Functional Requirements:
  - Users can control their lamp via the Telegram bot.
  - The Telegram bot receives and forwards user requests to the server.
  - The server sends instructions to the Arduino board to turn the lamp on or off based on user requests.
  - Users can schedule specific times for device activation or deactivation.
  - The scheduled times are sent to the devices for automatic operation.

### Non-Functional Requirements:
  - Reliability: The system should consistently perform lamp control commands and scheduled operations without disruptions.
  - Security: Ensure secure communication between the Telegram bot, server, and devices to protect user data and prevent unauthorized access.
  - Scalability: The system should handle a growing user base, devices, and concurrent requests without compromising performance.
  - Performance: Ensure prompt response times for user requests, minimizing latency and executing commands and operations quickly.
  - Usability: Design an intuitive and user-friendly Telegram bot interface for easy lamp control and scheduling setup.
  - Compatibility: Ensure compatibility with various devices and operating systems for seamless access and control of lamps.
  - Maintainability: Maintain a well-structured and documented codebase and infrastructure for future enhancements and maintenance.
