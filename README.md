<!--
*** Thanks for checking out this README Template. If you have a suggestion that would
*** make this better, please fork the repo and create a pull request or simply open
*** an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
***
***
***
*** To avoid retyping too much info. Do a search and replace for the following:
*** tylertaewook, project-orbitron, alitecraft, taewook.kim@columbia.edu
-->





<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/tylertaewook/project-orbitron">
     <img src="images/logo.png" alt="Logo" width="100" height="100">
  </a>

  <h3 align="center">Project Orbitron</h3>

  <p align="center">
    A 4WIS/4WID Vehicle with Spherical Wheels & A unique control algorithm in Mathematica
    <p align="center">
      December 2017 - May 2018
    <br />
    <a href="https://github.com/tylertaewook/project-orbitron"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/tylertaewook/project-orbitron">View Demo</a>
    ·
    <a href="https://github.com/tylertaewook/project-orbitron/issues">Report Bug</a>
    ·
    <a href="https://github.com/tylertaewook/project-orbitron/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
  * [Orbitron](#orbitron)
  * [Algorithm](#algorithm)
* [Build Notes](#build-notes)
  * [Spherical Wheels](#spherical-wheels)
  * [Main Body](#main-body)
* [Research](#research)
* [Contact](#contact)
* [Acknowledgements](#acknowledgements)

================================================================
> **[[LINK - MAKER PORTFOLIO]](https://youtu.be/WXjisSnfGTI)**

================================================================

<!-- ABOUT THE PROJECT -->
## About The Project

Project Orbitron is an independent build/research project featuring a vehicle with spherical wheels named ORBITRON and a unique control algorithm. 
The project began as a simple yet powerful urge to build a vehicle with spherical wheels after being inspired by [Goodyear 360](https://youtu.be/oSFYwDDVgac) but soon evolved into a research project under Kent Guild, academic society at Kent School, after realizing vehicle's potential. After presenting a project proposal in front of Kent Pre-Engineering Department, Project Orbitron was granted with $1,000 fund.

The finished algorithm is going through a patent process as of October 2020. (*Application Number: KR 10-2019-0087022*)

The project is divided into two big components:
* Building a vehicle with a spherical wheel that implements a 4 wheel independent steering/driving system in Arduino and C# Winform Application.
* Development of a unique control algorithm in Mathematica

<!-- ORBITRON -->
### Orbitron

![Orbitron](/images/orbitron1.jpeg)

Simply put, Orbitron is a vehicle with spherical wheels. The spherical wheels allow the efficient implementation of a 4WIS/4WID (4 Wheel Independent Steering/Driving) system. 4WIS/4WID is a steering system for a four-wheeled vehicle that allows for separate speed and direction controls for each wheel.
To accomplish this, each wheel has two separate motors each controlling speed and direction.

![Test Program](/images/Software/test_GUI.jpeg)

While building the Orbitron, a simple C# WinForms application was developed. This application communicates with Orbitron via XBee wireless module and controls simple movements to ensure every component is working properly.

<!-- ALGORITHM -->
### Algorithm

![Mathematica Algorithm](/images/Software/alg_GUI.png)

This intuitive control algorithm written in Mathematica is an attempt to control a 4WIS/4WID vehicle requiring intuitive yet simultaneous control of eight different parameters. I used 3dconnexion's [Spacemouse](https://3dconnexion.com/us/product/spacemouse-compact/) as an input device, and its inputs were integrated coherently by modeling the vehicle's movement as a motion along a circular path, where a straight-line motion is calculated as a motion along a circle of very large radius.

> **The full article, poster, and presentation can be found [HERE](https://github.com/tylertaewook/project-orbitron/tree/main/Final%20Deliverables)**

![XBee Module](/images/Orbitron/xbee.jpeg)

Similar to the C# WinForms application, this algorithm communicates with Orbitron via XBee module. The XBee module integrated in Orbitron's Arduino shield allows maximum range of one mile.

<!-- BUILD NOTES -->
## Build Notes

This build note summarizes the three-month journey. 

> **For more detailed Build/Research Notebook, click [HERE](https://github.com/tylertaewook/project-orbitron/blob/main/Research-Notebook.pdf)**

<!-- SPHERICAL WHEELS -->
### Spherical Wheels

![Wheel Design](/images/Orbitron/designwheel.png)

After an initial sketch of spherical wheel structure, the same design was modeled in Fusion 360. The CAD design was later modified from circular frame to rectangular frame to make woodworking easier. 
This design has two motors for each wheel. The HS-785HB servo with built-in gearbox on the top allows to control the wheel's direction by turning the entire rectangular structure. The 170-RPM Econ Gear Motor directly connected to sphere's shaft takes care of actually driving the wheel and controlling its speed.

![Wheel](/images/Orbitron/wheel1.jpeg)

This is the photo of a finished wheel taken in Kent School's Pre-Engineering Center. As wheel structure required boring many holes and cutting solid wood, most of the work was done with Pre-E center's powertools.

![Servo Motor](/images/Orbitron/servo.jpeg)

This is the [HS-785HB Servo](https://www.servocity.com/hs-785hb-servo/) with its 7:1 ratio metal gearbox. This certain servo has a range of 2880 degrees, unlike normal servo's 180 degrees range, which allows for almost 360 degree movement even with the gearbox.

<!-- MAIN BODY -->
### Main Body

![Body Design](/images/Orbitron/designbody.png)

Initial design was sketched on paper and soon moved to Fusion 360 CAD design. The body is shaped like two big 'H' glued together to have room for each spherical wheels.

![Body Structure](/images/Orbitron/structure.jpeg)

I built the body out of MDF board at first, but it proved to be too heavy. Therefore, the final body was made of PVC Foamex board which was lighter and stronger. Finally, PVC tubes were screwed onto the body to support its entire weight more stably

![Folded](/images/Orbitron/folded.jpeg)

To continue working on this project during summer vacation when I flied back to Korea, the body was carefully designed to be folded. This made it much easier for overseas shipping without breaking any of the components. When shipped, each wheel structure was detached from body and packaged separately.

![Problem-Solving](/images/Orbitron/deskocr.png)

As this was the largest build project I have done so far, I encountered many MANY issues along the journey. One of the biggest challenges was suppressing strong electromagnetic interferrence from DC motors where I tried everything from visiting Seoul National University Lab to trying every EMI components. This month-long journey eventually made it into my personal statement essay during college admissions.

![Parts List](/images/Orbitron/partlist.png)

**For more detailed parts list with prices, click [HERE](https://github.com/tylertaewook/project-orbitron/blob/main/Parts%20List.pdf)**


<!-- Research -->
## Research

![Paper & Poster](/images/paperposter.png)
> **The full article, poster, and presentation can be found [HERE](https://github.com/tylertaewook/project-orbitron/tree/main/Final%20Deliverables)**


The research of intuitive control algorithm took approximately three months, from Jan 2018 to March 2018. In this short time, I taught myself Mathematica from scratch, finished the algorithm, wrote a full paper, and presented to both Kent Guild and Connecticut Science and Engineering Fair.
As a result, I was accepted to be one of three student members in Kent Guild, an academic society at Kent, and I was awarded with sevel awards from CT Science Fair.

Kent News Feature (yes, twice!)
* [Kent News - Guild Presentation](https://kentnews.org/2525/features/a-guild-presentation-by-tyler-kim-20/)
* [Kent News - CT Science Fair](https://kentnews.org/2382/features/an-outstanding-performance-at-the-71st-annual-connecticut-science-and-engineering-fair/)

List of Awards (CT Science Fair)
* United Technologies Corporation Awards
* IEEE, Connecticut Section
* Robotics And Beyond — For Excellence in Engineering Design
* Barker Mohandas Awards for Transportation Research
* Lockheed Martin Physical Sciences Awards
* Computer Science Awards
* Collins Aerospace Engineering Awards

<!-- CONTACT -->
## Contact

Tyler Kim - taewook.kim@columbia.edu

Project Link: [https://github.com/tylertaewook/project-orbitron](https://github.com/tylertaewook/project-orbitron)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements

* [Dr. Ben Nadire, Guild Advisor]
* [Mr. Kevin Saxton, AP Computer Science Instructor]





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/tylertaewook/repo.svg?style=flat-square
[contributors-url]: https://github.com/tylertaewook/repo/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/tylertaewook/repo.svg?style=flat-square
[forks-url]: https://github.com/tylertaewook/repo/network/members
[stars-shield]: https://img.shields.io/github/stars/tylertaewook/repo.svg?style=flat-square
[stars-url]: https://github.com/tylertaewook/repo/stargazers
[issues-shield]: https://img.shields.io/github/issues/tylertaewook/repo.svg?style=flat-square
[issues-url]: https://github.com/tylertaewook/repo/issues
[license-shield]: https://img.shields.io/github/license/tylertaewook/repo.svg?style=flat-square
[license-url]: https://github.com/tylertaewook/repo/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/tylertaewook
[product-screenshot]: images/screenshot.png
