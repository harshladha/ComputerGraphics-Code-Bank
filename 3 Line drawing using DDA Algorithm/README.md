# Line Drawing Using DDA Algorithm

This C++ program demonstrates how to prepare for drawing a line between two points using the Digital Differential Analyzer (DDA) algorithm with `graphics.h`. The program currently computes incremental steps but does not yet plot pixels—ideal for illustrating how DDA calculates positions.

---

## 🚀 How It Works

- Prompts the user to enter coordinates for:
  - Starting point (X1, Y1)
  - Ending point (X2, Y2)
- Calculates:
  - The difference in X and Y (`dx`, `dy`)
  - The length of the line (whichever is greater: `dx` or `dy`)
  - The incremental steps (`dx/length`, `dy/length`)
- (Note: This program prepares DDA calculations but does **not** yet loop through and draw pixels)
- Waits for a key press with `getch()` before closing

---

## 📋 Sample Output

Enter X1 coordinate
10
Enter Y1 coordinate
20
Enter X2 coordinate
100
Enter Y2 coordinate
150

- The program calculates:
  - `dx = 90`
  - `dy = 130`
  - `length = 130`
  - `dx/length` and `dy/length` used for DDA stepping

*(Note: No graphical output is displayed in this version)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `DDALine.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TC\BGI`

---

## 📚 Concepts Demonstrated
- **User input via `cin`**
- **Coordinate geometry**
- **Incremental calculation for DDA line drawing**
- **Mathematical preparation for plotting pixels**
- **Understanding how `dx` and `dy` determine slope and steps**

---
