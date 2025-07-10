# Smiley Face

This C++ program uses `graphics.h` to draw a simple smiley face on the screen. It demonstrates how to combine basic shapes like circles, lines, arcs, and fill styles to create a facial expression using graphics primitives.

---

## 🚀 How It Works

- Initializes the graphics mode using `initgraph()`
- Draws the face:
  - A large red-filled circle representing the head
- Draws two smaller circles for the eyes at:
  - Left eye: (225,132)
  - Right eye: (375,132)
- Draws a vertical line down the center of the face (possibly representing a nose or divider)
- Draws a large arc for the smile
- Uses `floodfill()` to fill the face with red color after the head circle is drawn

---

## 📋 Sample Output

Below is a **textual description** of the graphical output:

- A large **red circular face** centered at (300,200) with radius 180
- Two **eye circles**:
  - Left eye at (225,132) with radius 30
  - Right eye at (375,132) with radius 30
- A **vertical line** from (300,150) to (300,250) at the center of the face
- A **smiling arc** from angle 225° to 315° with radius 150, forming a curved smile near the bottom of the face

*(Note: The exact appearance depends on screen resolution and graphics driver behavior in Turbo C++)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `SmileyFace.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TC\BGI`

---

## 📚 Concepts Demonstrated
- **Graphics mode initialization (`initgraph`)**
- **Drawing circles with `circle()`**
- **Filling areas using `floodfill()`**
- **Drawing arcs using `arc()`**
- **Combining primitives to form complex shapes**
- **Using `setfillstyle()` to define fill patterns and colors**

---
