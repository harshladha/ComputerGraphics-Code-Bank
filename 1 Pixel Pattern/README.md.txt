# Single Pixel and Pre-Specified Pattern Display

This C++ program demonstrates how to produce individual pixels and draw a pre-specified pattern on the screen using `graphics.h`. It showcases basic drawing primitives including pixels, lines, text, rectangles, circles, arcs, and ellipses.

---

## 🚀 How It Works

- Initializes the graphics mode with `initgraph()`
- Plots individual pixels at specified coordinates in different colors:
  - Green, Red, Blue, White, Yellow
- Draws a cyan line between points (85,99) and (145,88)
- Displays text "Sat Sri Akal" in green at position (93,80)
- Draws:
  - A white rectangle spanning coordinates (52,45) to (31,26)
  - A blue circle with center at (150,40) and radius 30
  - A yellow arc centered at (170,40) from 15 to 45 degrees with radius 40
  - A yellow ellipse centered at (250,200) with horizontal radius 80 and vertical radius 150
- Waits for a key press with `getch()` before closing the graphics window

---

## 📋 Sample Output

Below is a **visual description** of what you will see in the graphics window:

- **Pixels:**
  - A green pixel at (45,45)
  - A red pixel at (50,50)
  - A blue pixel at (60,60)
  - A white pixel at (55,55)
  - A yellow pixel at (65,65)

- **Line:**
  - A cyan line diagonally from approximately the top-left towards the center

- **Text:**
  - "Sat Sri Akal" in green placed near the line

- **Rectangle:**
  - A small white rectangle in the upper-left quadrant

- **Circle:**
  - A blue circle centered near the upper-center of the screen

- **Arc:**
  - A yellow arc starting from the right edge of the circle

- **Ellipse:**
  - A large yellow ellipse towards the bottom-center

*(Note: The exact positions may vary depending on screen resolution and graphics mode.)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `PIXELPATTERN.CPP`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: C:\TC\BGI

---

## 📚 Concepts Demonstrated
- **Graphics mode initialization (`initgraph`)**
- **Drawing individual pixels with `putpixel()`**
- **Basic shapes: line, rectangle, circle, arc, ellipse**
- **Displaying text with `outtextxy()`**
- **Using `setcolor()` to change drawing color**

---
