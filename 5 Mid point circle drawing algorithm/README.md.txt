# Circle Drawing Using Midpoint Algorithm

This C++ program demonstrates how to draw a circle using the **Midpoint Circle Drawing Algorithm** with `graphics.h`. It incrementally plots symmetric points around the circle center and fills the circle with color.

---

## 🚀 How It Works

- Initializes the graphics mode using `initgraph()`
- Prompts the user to enter the **radius** of the circle
- Initializes:
  - Starting point `(x=0, y=radius)`
  - Decision parameter `d=1.25 - radius`
- Iteratively plots the eight symmetric points of the circle in each octant using `putpixel()`:
  - `(x, y)`
  - `(-x, y)`
  - `(x, -y)`
  - `(-x, -y)`
  - `(y, x)`
  - `(-y, x)`
  - `(y, -x)`
  - `(-y, -x)`
- Updates the decision parameter `d` to decide the next pixel position:
  - If `d < 0`, move horizontally
  - Otherwise, move diagonally inward
- Continues until `x` exceeds `y`
- Fills the circle with solid red using `floodfill()`
- Waits for a key press with `getch()` before closing

---

## 📋 Sample Output

Below is a **textual description** of the graphical output:

- A **white circle** centered at `(200, 200)` with radius as entered by the user
- The circle appears smoothly drawn due to plotting all eight symmetric points
- The interior of the circle is **filled solid red**

*(Note: The exact appearance may vary depending on the radius entered and screen resolution)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `MidpointCircle.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TurboC3\BGI`

---

## 📚 Concepts Demonstrated
- **Graphics mode initialization (`initgraph`)**
- **Midpoint Circle Drawing Algorithm logic**
- **Symmetry optimization for circle plotting**
- **Drawing pixels with `putpixel()`**
- **Filling a shape with `floodfill()`**
- **Using `setfillstyle()` to set fill patterns and colors**

---
