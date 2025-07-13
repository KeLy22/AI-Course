# 🎮 Connect Four – Console-based Python Game with AI

Welcome to **Connect Four**, a classic two-player game built in Python! Play against a smart AI that uses the **Minimax algorithm with Alpha-Beta Pruning** to make optimal moves. This version runs directly in your console and is perfect for learning game logic, AI, and Python programming.

---

## 📌 Features

* Fully playable game between a human and a computer
* AI logic implemented using Minimax with Alpha-Beta Pruning
* Text-based console UI
* Game status detection: win, draw, or ongoing
* Smart move scoring system for AI

---

## 🛠️ How to Run the File

### ▶️ Run using Python

1. **Download or clone** this repository:

   ```bash
   git clone https://github.com/your-username/connect-four-ai.git
   cd connect-four-ai
   ```

2. **Make sure Python is installed** (version 3.x):

   ```bash
   python --version
   ```

3. **Run the game**:

   ```bash
   python connect_four.py
   ```

---

## 📦 Prerequisites

No external libraries are required. This game uses **only standard Python libraries**.

✅ Pre-installed with Python:

* `random`
* `math`

---

## 🎮 How to Play the Game

* The game is played on a 7x6 grid.
* You and the computer take turns.
* You are **Player 1** (`X`), and the computer is **Player 2** (`O`).
* On your turn, enter a column number (0–6) where you want to drop your disc.
* The disc will occupy the lowest available space in the selected column.
* First player to connect **4 of their pieces in a row** (horizontally, vertically, or diagonally) **wins** the game.
* If the board fills up without a winner, it's a **draw**.

---

## 🧠 Algorithm Used

The AI in this game is powered by:

### ✅ **Minimax Algorithm with Alpha-Beta Pruning**

* The algorithm searches possible game states up to a certain depth (default is 4).
* It assigns scores to potential moves using a **heuristic evaluation function**.
* **Alpha-Beta pruning** is used to **optimize the search** and skip irrelevant branches.
* AI strategy favors:

  * Center column positions (most strategic)
  * Blocking player's near wins
  * Creating multiple winning paths

---

## 🧑‍💻 Project Structure

```
connect-four-ai/
│
├— connect_four.py       # 🧠 Main Python script
├— README.md             # 📘 Game instructions and details
```

---

## 📚 Educational Value

This project is great for learning:

* Game loop design
* Turn-based systems
* Board representation using 2D arrays
* Basic AI with heuristic evaluations
* Search algorithms like Minimax

---

## 📣 Contribution

Feel free to fork this repository, improve the AI, add a GUI using Tkinter or Pygame, and create your own version! Pull requests are welcome. 😊

