# Autonomous buggy group project
These files contain the code we developed for our second-year project. 
The aim of the project was to design a buggy that will follow and detect a white line on a fixed track with obstacles such as line breaks in the track and direct sunlight. In order to design the buggy suitable components were chosen such as the gearbox and the sensors. A Nucleo 64 board that contained an STM32F401RE microcontroller was used. The project consisted of various stages including motor characterization, sensor characterization, control algorithm, software system design, and chassis design. I was mainly responsible for the control algorithm and software system design. I was also the team leader. As a team leader, I orchestrated seamless communication among team members, ensuring that everyone participated effectively. My role included task assignment and the establishment of weekly meetings to track progress, discuss updates, and achieve milestones.

The code was written in C/C++ and various pre-written libraries were utilized. 
The encoder file contains the code to implement an encoder that calculates the buggy's speed and position.
The sonar file contains the code that was used to control the buggy's movement by reading the signals that were generated from a sonar sensor. The code allows the buggy to calculate its distance from a wall and come to a stop when the wall is 3 meters away from the buggy. 
The buggy's control algorithm was implemented using PID control to provide stable and quick maneuvering.
A full report is also attached that explains the complete procedure from A-Z and emphasizes the different stages involved.
