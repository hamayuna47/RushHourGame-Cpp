# Rush Hour Game in C++

## Overview
Rush Hour is an engaging C++ game featuring a dynamic graphical interface and immersive gameplay elements. The game challenges players to navigate a busy environment, picking up and dropping off passengers while avoiding obstacles.

## Features
- **Random Level Generation**: Every level is uniquely generated with different paths, starting points, and drop locations, ensuring a fresh experience each time.
- **Random Person Generation**: Passengers have distinct attributes and destinations, adding variety to the gameplay.
- **Random Drop Locations**: Each drop point is dynamically assigned, increasing complexity and replayability.
- **Dynamic Hurdles**: Randomly placed obstacles test the player’s navigation skills and strategy.
- **Smooth Controls**: Responsive and intuitive controls enhance the overall user experience.
- **Collision Detection**: Ensures realistic interactions with obstacles and the game environment.
- **Scoring System**: Points are awarded based on successful deliveries and navigation efficiency.

## Technologies Used
- **C++**: Core programming language for game logic.
- **Graphics Library**: Implemented using SFML/SDL/OpenGL (Specify the one used).
- **Randomization Algorithms**: Used for level and character generation.

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/rush-hour-game.git
   ```
2. Navigate to the project directory:
   ```sh
   cd rush-hour-game
   ```
3. Compile the code (example using g++ and SFML):
   ```sh
   g++ main.cpp -o rush_hour -lsfml-graphics -lsfml-window -lsfml-system
   ```
4. Run the game:
   ```sh
   ./rush_hour
   ```

## How to Play
1. Start the game and navigate using arrow keys (or specified controls).
2. Pick up passengers from their starting locations.
3. Drop them at their assigned destinations.
4. Avoid obstacles and navigate efficiently to maximize your score.
5. Complete levels with the highest possible score!

## Future Enhancements
- Adding more complex AI behavior for pedestrians and vehicles.
- Implementing multiplayer mode.
- Enhancing the graphical interface with animations.

## Contributing
Contributions are welcome! Feel free to submit a pull request or report issues in the repository.

---
Developed by [Humayun Abdullah]

