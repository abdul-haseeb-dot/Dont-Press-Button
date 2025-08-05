# Don't Press The Button Game

This is an original game built with C++ and Raylib, where players must quickly decide whether to press or avoid pressing a button based on contextual instructions and visual cues, testing their reflexes.

## Overview

Don't Press The Button is an arcade-style game that tests your ability to follow instructions under time pressure. Each level presents a different colored button with specific instructions; sometimes you must press it, sometimes you must resist the temptation. The game combines quick decision-making with visual perception skills as players navigate through increasingly challenging levels with varying time constraints.

## Features

- **10 Progressive Levels**: Each level increases in difficulty with shorter time limits and more complex instructions
- **Dynamic Visual Design**: Different button colors and background combinations for each level
- **Timer-Based Gameplay**: Countdown timers add pressure and urgency to decision-making
- **Intuitive Mouse Controls**: Simple click-based interaction system
- **Win/Lose States**: Clear feedback on game completion with appropriate visual responses
- **Responsive UI**: Centralized text and button positioning for optimal user experience

## Game Mechanics

### Core Gameplay
- Players are presented with a colored button and textual instructions
- Each level has a specific time limit ranging from 2-10 seconds
- Success depends on correctly interpreting whether to press or avoid the button
- Failure on any level results in immediate game over
- Completing all 10 levels results in victory

### Level Examples
- **Press Levels**: Instructions explicitly tell you to press a specific colored button
- **Avoid Levels**: Instructions warn against pressing the button—patience is key
- **Misdirection Levels**: Button color may not match the instructed color, testing attention to detail

## Technical Specifications

### Dependencies
- **Raylib**: Graphics and input handling library
- **C++17**: Modern C++ standard for implementation
- **Windows**: Currently configured for Windows builds with MinGW

### Architecture
The game follows object-oriented design principles:
- **Level Class**: Encapsulates individual level logic, timing, and win conditions
- **Utils Module**: Provides centralized drawing functions and constants
- **Modular Design**: Separation of concerns between game logic, rendering, and utilities

### Build System
- **Make-based**: Cross-platform Makefile for easy compilation
- **Static Linking**: Self-contained executable with embedded dependencies

## Installation & Setup

### Prerequisites
1. Install a C++ compiler (e.g., GCC or MinGW for Windows).
2. Install [Raylib](https://www.raylib.com/) (a simple and easy-to-use library for game development).
3. Ensure you have a terminal or command prompt to run commands.

### Building the Game
1. Clone or download the project
2. Navigate to project directory
3. Run the following command to compile the game:
```bash
make all
```
4. Or use this command to compile and run the game in one step:
```bash
make run
```

### Cleaning Build Files
To remove compiled files and clean the project, run:
```bash
make clean
```

## Project Structure

```
├── src/
│   ├── main.cpp           # Game entry point and level orchestration
│   ├── Level.cpp          # Level class implementation
│   └── utils.cpp          # Utility functions and constants
├── include/
│   ├── Level.hpp          # Level class header
│   └── utils.hpp          # Utility headers and constants
├── Makefile               # Build configuration
├── .gitignore             # Version control exclusions
└── README.md              # Project documentation
```

## Controls

- **Mouse Left Click**: Interact with the button
- **Any Key**: Exit the game after completion (win/lose screen)
- **Window Close Button**: Exit at any time

## Development Features

### Visual Design
- Customizable button colors per level
- Dynamic background colors for visual variety
- Centralized text rendering with automatic positioning
- Smooth 60 FPS gameplay experience

## Performance Characteristics

- **Memory Efficient**: Stack-based allocation with minimal heap usage
- **CPU Optimized**: O2 compiler optimizations for smooth gameplay
- **Responsive Input**: Direct mouse position calculation for precise button detection
- **Stable Frame Rate**: Consistent 60 FPS target for fluid experience

## Limitations & Future Development

### Current Limitations
The game currently features a **hardcoded level system** where all 10 levels are predefined with fixed:
- Button colors and background combinations
- Instruction text and objectives
- Time limits and difficulty progression
- Level sequence and order

### Planned Future Updates
**Randomized Level Generation**: A major enhancement planned for future versions will introduce:
- **Dynamic Level Creation**: Procedurally generated levels with random button colors, backgrounds, and time constraints
- **Instruction Randomization**: Algorithmic generation of various instruction types and complexity levels
- **Adaptive Difficulty**: Smart difficulty scaling based on player performance and reaction times
- **Infinite Gameplay**: Endless mode with progressively challenging randomly generated levels
- **Configuration System**: Player-customizable difficulty settings and level parameters

This randomization system will significantly increase replayability and provide a unique experience for each game session, moving beyond the current static level design to a more dynamic and engaging gameplay model.
