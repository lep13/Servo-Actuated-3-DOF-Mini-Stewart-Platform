# Servo-Actuated-3-DOF-Mini-Stewart-Platform


## ABSTRACT

Miniature Stewart platforms have gained attention due to their potential applications in various domains, such as robotics, simulators, and haptic devices. This project aims to design and develop a cost-effective mini-Stewart platform actuated by three servo motors and controlled by an Arduino MKRZero microcontroller. The methodology involves using six push buttons to input different angle values to the servo motors. The platform is powered by a 7.4V 2S LiPo battery with a DC-DC buck converter, regulating the voltage supply to 5V for the servo motors. The microcontroller is powered via a USB cable connected to a PC. The outcomes demonstrate the successful implementation of a mini-Stewart platform, highlighting its feasibility and potential in various applications. 


## INTRODUCTION

### 1.1 Overview

This chapter provides an introduction to the mini-Stewart platform project, discussing its relevance in the current technological landscape, the motivation behind the project, and the objectives. The organization of the report is also outlined.

### 1.2 Background & Motivation

The Stewart platform, also known as a hexapod, is a parallel manipulator that has found numerous applications in robotics, flight simulators, and haptic devices, among others. In recent years, there has been a growing interest in miniaturizing these platforms for broader accessibility and use in various domains. As a result, developing an affordable, compact, and efficient mini-Stewart platform is of significant importance.

The motivation behind this project stems from the need for a cost-effective and easily implemented mini-Stewart platform that can be used in a variety of applications. By leveraging advancements in microcontroller technology and affordable servo motors, this project aims to create a compact and efficient system suitable for a wide range of industries and applications.

 ![image](https://user-images.githubusercontent.com/126688687/236431722-1d8ad565-b088-4e56-bb82-d59d95866ca5.png)
 *Fig1.2 CAD of the Stewart Platform*


### 1.3 Literature Review

A comprehensive literature review was conducted to understand the current state of research and development in the field of Stewart platforms and parallel manipulators. The review focused on the history and evolution of Stewart platforms, their applications in various industries, and recent advancements in miniaturization, control systems, and power management. This research provided valuable insights into the challenges and opportunities associated with developing a compact and affordable mini-Stewart platform and informed the design and implementation decisions throughout the project.

### 1.4 Objectives

The primary objectives of this project are to design, build, and test a mini-Stewart platform actuated by servo motors and controlled by an Arduino MKRZero microcontroller. The platform should be compact, affordable, and efficient, making it accessible for various applications.

### 1.5 Summary

The remainder of the report is organized as follows: Chapter 2 presents the methodology, including the literature survey and design process. Chapter 3 discusses the results and their analysis, while Chapter 4 provides a summary and conclusion of the work, along with possible future improvements.

 
## METHODOLOGY

### 2.1 Introduction

This chapter outlines the methodology adopted for the development of the mini-Stewart platform project. It begins with a literature survey of existing technologies, approaches, and applications related to parallel manipulators and Stewart platforms. Then, the proposed solution is discussed, detailing the design and implementation process, including circuit diagrams and design calculations. Finally, a summary of the chapter is provided.

####    2.1.1 Literature Survey
       A comprehensive literature survey was conducted to study existing Stewart platform designs, control methods, and applications. This survey included references from journals, conference proceedings, and other academic sources, providing insights into the challenges and opportunities associated with miniaturizing the platform and implementing cost-effective control strategies using Arduino-based microcontrollers. The literature survey helped identify best practices, potential pitfalls, and innovative solutions that informed the design and implementation decisions throughout the project.

### 2.2 Proposed Solution

The proposed solution involved designing a mini-Stewart platform actuated by three MG90s microservo motors and controlled by an Arduino MKRZero microcontroller. The platform was powered using a 7.4V 2S LiPo battery, with a LM2596 DC-DC buck converter providing a regulated 5V supply for the servo motors. The control system was designed to accept angle values inputted via six push buttons.

 ![image](https://user-images.githubusercontent.com/126688687/236431884-bd72c68a-170f-489e-9728-1e704f79e2a2.png)  
 *fig2.2.1 MG90s microservo motors*       

![image](https://user-images.githubusercontent.com/126688687/236431923-28406c8f-3f91-4bfd-a083-a6e3975197bd.png)
*fig2.2.2 Arduino MKRZero microcontroller*       

![image](https://user-images.githubusercontent.com/126688687/236431948-bc01b64e-1118-4c65-bb8f-b211f7f40890.png)
*fig2.2.3 LM2596 DC-DC buck converter*

                                 

The design process began with the selection and sizing of components, such as the microcontroller, servo motors, and power supply components. A circuit diagram was developed to illustrate the connections between the components, including the microcontroller, servo motors, push buttons, resistors, battery, and buck converter. Design calculations were performed to determine the appropriate voltage levels, current requirements, and resistor values needed to ensure the safe and efficient operation of the platform.

The implementation of the mini-Stewart platform involved constructing the platform using off-the-shelf components and programming the Arduino MKRZero microcontroller to manage the platform's movements and respond to input from the push buttons. The control algorithm was developed to provide precise and accurate control of the servo motors, enabling the platform to move in response to user input.

####    2.2.1 Circuit Model
 ![image](https://user-images.githubusercontent.com/126688687/236432032-93d85847-1d78-4a32-a1b9-fc72227158df.png)
                         *Fig2.2.5 Circuit model*


####    2.2.2 Testing and Validation
    A comprehensive literature survey was conducted to study existing Stewart platform designs, control methods, and applications. This survey included references from journals, conference proceedings, and other academic sources, providing insights into the challenges and opportunities associated with miniaturizing the platform and implementing cost-effective control strategies using Arduino-based microcontrollers. The literature survey helped identify best practices, potential pitfalls, and innovative solutions that informed the design and implementation decisions throughout the project.

![image](https://user-images.githubusercontent.com/126688687/236432122-393e08eb-6b2c-44b9-a58f-72d2f6ed14c9.png) 
*Fig2.2.6 Hardware model*


### 2.3 Summary
This chapter presented the methodology followed for the development of the mini-Stewart platform project. It began with a literature survey of existing technologies and approaches related to parallel manipulators and Stewart platforms, followed by the proposed solution, which detailed the design and implementation process, including circuit diagrams and design calculations. The mini-Stewart platform was then tested and validated to ensure it met the project objectives. The next chapter will discuss the results obtained from the testing and validation process, along with an analysis of the platform's performance. 


## RESULT ANALYSIS

### 3.1 Results

The mini-Stewart platform was successfully implemented using the selected components, and the Arduino MKRZero microcontroller effectively controlled the servo motors based on the input from the push buttons. The platform demonstrated smooth and precise movement, showcasing its potential for use in various applications.


### 3.2 Performance Evaluation

A series of tests were conducted to evaluate the performance of the mini-Stewart platform under different operating conditions. These tests assessed the platform's accuracy, repeatability, and load-carrying capabilities. The results indicated that the platform performed well in most scenarios, meeting the design objectives and highlighting its potential for use in applications such as robotics, simulators, and haptic devices. 


## SUMMARY AND CONCLUSION 

### 4.1 Summary

This project aimed to design and develop a mini-Stewart platform actuated by three servo motors and controlled by an Arduino MKRZero microcontroller. The methodology involved using six push buttons to input different angle values to the servo motors. The platform was powered by a 7.4V 2S LiPo battery with a DC-DC buck converter, regulating the voltage supply to 5V for the servo motors. The results demonstrated the successful implementation of the mini-Stewart platform and its potential in various applications.

### 4.2 Conclusion and Future Scope

The project successfully achieved its objectives, demonstrating the feasibility of designing and implementing a cost-effective mini-Stewart platform using off-the-shelf components and an Arduino-based control system. The mini-Stewart platform's performance evaluation showcased its potential for use in a range of applications, such as robotics, simulators, and haptic devices.

Future work can focus on improving the platform's performance through more advanced control algorithms and optimization of the mechanical design. Additionally, further exploration of applications in various

### 4.3 References
1. Stewart, D. (1965). A platform with six degrees of freedom. Proceedings of the Institution of Mechanical Engineers, 180(1), 371-386.

2. Innocenti, C., & Parenti-Castelli, V. (1993). Forward kinematics of the general 6-6 Stewart mechanism: an exhaustive numerical approach via a mono-dimensional search. Mechanism and Machine Theory, 28(4), 553-564.

3. Gosselin, C., & Angeles, J. (1991). Singularity analysis of closed-loop kinematic chains. IEEE Transactions on Robotics and Automation, 7(3), 281-290.

4. Tsai, L. W. (1999). Robot analysis: the mechanics of serial and parallel manipulators. John Wiley & Sons.

5. Merlet, J. P. (2006). Parallel robots. Springer Science & Business Media.
