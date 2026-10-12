# 💀 GUESSING GAME (CLI)

A command-line number guessing game written in C with a dramatic twist: **guess the secret number or face digital death!** 

Featuring custom ASCII art, dynamic difficulty levels, suspenseful delays, and interactive console controls, this project was built as a hands-on exercise to master C fundamentals like loops, conditional logic, pseudo-random number generation, and terminal manipulation.

---

## 🚀 Features

* **Three Difficulty Levels:**
  * 🟢 **Easy:** 15 lives
  * 🟡 **Medium:** 10 lives
  * 🔴 **Hard:** 6 lives (for true daredevils)
* **Dynamic Hints:** The computer guides you after each wrong guess telling you whether to aim higher or lower.
* **Atmospheric Experience:** Uses Windows-specific console utilities (`Windows.h`, `conio.h`) including timed delays (`Sleep`), screen clearing (`system("cls"`), and keypress detection (`getch`).
* **ASCII Art Integration:** Custom ASCII graphics for menus, mood reactions, and a dramatic tombstone screen if you run out of lives.

---

## 🛠️ Prerequisites & Compatibility

* A C compiler (such as GCC, MinGW, or MSVC).
* **OS:** Windows (due to the use of `<windows.h>` for `Sleep()` and `<conio.h>` for `getch()`).

---

## ⚙️ How to Compile and Run

1. Clone or download this repository.
2. Open your terminal in the project directory.
3. Compile the source code using GCC:
   ```bash
   gcc main.c -o guessing_game.exe
   ./guessing_game.exe
