# C++ & Robotics Learning Journey

Systematic study of modern C++17 and ROS2, targeting embedded software engineer
roles in the German robotics industry.

## Background

I have 3.5 years of software development experience, including nearly 2 years focused
on robotic C/C++ software for a parallel 6-axis robot at Huawei's 2012 Lab —
work that covered real-time motor control, trajectory planning algorithm integration,
and on-site production line debugging. This repository documents my effort to build
a stronger, more systematic foundation in the areas I used in practice but want to
truly master: modern C++, Linux tooling, CMake, Git, and ROS2.

## What I'm Building Here

**Modern C++17 fundamentals** — working through LearnCpp.com systematically, with
all code compiled under strict warning flags (-Wall, -Weffc++, -Werror,
-pedantic-errors). The goal is to build the kind of clean, memory-safe habits that
industrial C++ demands, not just syntax familiarity.

**Linux, CMake, and Git** — tools I used daily in production but never studied
from first principles. Getting these right matters for working in mature German
engineering teams.

**ROS2 and hardware integration** — nodes, topics, services, and eventually
ros2_control with EtherCAT, Docker-based deployment, and PREEMPT-RT real-time
Linux. The direction is production-grade robotics, not toy demos.

## Repository Structure

Each concept or exercise lives in its own subdirectory under the corresponding week
folder (e.g. week01/hello/, week01/io/).
