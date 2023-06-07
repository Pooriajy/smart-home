**Table of Contents**
- [About](#about)
- [Features](#features)
- [Built With](#built-with)
- [Technical Specifications](#technical-specifications)
- [Project Requirements](#Project-Requirements)
  - [Functional Requirements](#Functional-Requirements)
  - [Non-Functional Requirements](#Non-Functional-Requirements)
- [Project Documentation](#Project-Documentation)
  - [Needs assessment and project scenario](#Needs-assessment-and-project-scenario)
  - [Project Analysis and Design](#Project-Analysis-and-Design)
  - [Project Management](#Project-Management)
- [Project Members](#Project-Members)
- [License](#License)

# About
### This is a showcase of how a smart-home managment system would work !

# Features
- Auto device registration system
- Telegram controled

# Built With
- python web.py library
- Arduino-based Nodemcu
- Empowered by Telegram

# Technical Specifications
- Platform: Linux, Nodemcu
- Programming Languages: C, Python
- Database: SQLITE3

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

# Project Documentation
### Needs assessment and project scenario:
  - Project Scenario: [Link](docs/SCENARIO.md)
  - Project Needs assessment: [Link](docs/NEEDS_ASSESSMENT)
  - Project Requirements: [Link](docs/RERUIREMENTS.md)

### Project Analysis and Design:
- Usecase Diagram: [Link](docs/Diagrams/use-case_diagram.png)
- Activity Diagram: [Link](docs/Diagrams/activity_diagram.jpg)
- Class Diagram: [Link](docs/Diagrams/class_diagram)
- Sequence Diagram: [Link](docs/Diagrams/sequence_diagram.png)

### Project Management:
  - Project Phasing documentation: [Link](docs/PHASING.md)
  - Project Scheduling documentation: [Link](docs/SCHEDULING.md)

# Project Members
| Full Name | Student Number | Roles & Responsibilities | Username |
| --- | --- | --- | --- |
| Pooria Jome Yazdian | `99149019` | Software Developer | [Link](https://github.com/Pooriajy) |
| Mahdi Heydari | `99149025` | Documentiation Engineer | [Link](https://github.com/MahdiHeydariCE) |
| Elahe Jafari | `99149017` | Scrum Master | [Link](http://Github.com/iamelinnile) |
| Amir Hossian Azin | `97149005` | User Interface Design | [Link](https://github.com/amir-azin) |
| Ali KermanShahian | `98149048` | Systems Analyst | [Link](https://github.com/kermanshahianali) |





# License
Distributed under the MIT License. See [`LICENSE`](LICENSE) for more information.
