# Line Drawing Using Multiple Algorithms

This C++ program demonstrates how to draw lines between points using different algorithms with `graphics.h`. Specifically, it shows a basic line routine, an improved line version, and the Generalized Bresenham algorithm to illustrate various approaches to rasterization.

---

## 🚀 How It Works

- Initializes the graphics mode using `initgraph()`
- Prompts the user to enter coordinates for three points:
  - (x1, y1)
  - (x2, y2)
  - (x3, y3)
- Draws:
  - A red line between (x1, y1) and (x2, y2) using a **basic line algorithm (`bl`)**
  - A white line between (x2, y2) and (x3, y3) using an **improved line algorithm (`il`)**
  - A blue line between (x3, y3) and (x1, y1) using a **Generalized Bresenham algorithm (`gb`)**
- Waits for a key press with `getch()` before closing the graphics window

---

## 📋 Sample Output

Below is a **visual description** of what you will see in the graphics window after entering coordinates:

- **Red Line:**
  - Drawn between the first and second point using a basic incremental algorithm
- **White Line:**
  - Drawn between the second and third point with improved error correction
- **Blue Line:**
  - Drawn between the third and first point using the Generalized Bresenham algorithm

Together, these lines will typically form a triangle connecting the three input points, each line styled in a different color to compare the methods.

*(Note: The appearance depends on the coordinates entered and screen resolution)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `MultiLineAlgorithms.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TURBOC3\BGI`

---

## 📚 Concepts Demonstrated
- **Graphics mode initialization (`initgraph`)**
- **Drawing lines with incremental algorithms**
- **Error term handling in line rasterization**
- **Generalized Bresenham algorithm**
- **Use of `putpixel()` to manually control pixels**
- **Working with user input to define points dynamically**

---
