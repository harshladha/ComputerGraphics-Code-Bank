# 3D Bar Drawing using Transformation Matrix Input

This C++ program demonstrates how to draw a **3D bar** using `graphics.h`. It prompts the user to input a **3×3 transformation matrix** and uses the values to define the bar's position and size.

---

## 🚀 How It Works

- Initializes graphics mode with `initgraph()`
- Prompts the user to enter:
  - All 9 elements of a 3×3 transformation matrix (though only the first 6 are used for the bar)
- Calls `bar3d()` to draw a 3D bar using:
  - `(a[0][0], a[0][1])` as the top-left corner
  - `(a[0][2], a[1][0])` as the bottom-right corner
  - `a[1][1]` as the depth of the 3D effect
  - `a[1][2]` to specify whether the top face is drawn
- Waits for a key press before closing the graphics window

> ⚠️ **Note:**  
Only the **first six elements** of the matrix are used for drawing. The remaining values are ignored in this program.

---

## 📋 Sample Output

Example flow:

Enter the elements of the 3x3 transformation matrix:
Element [0][0]: 100
Element [0][1]: 100
Element [0][2]: 200
Element [1][0]: 200
Element [1][1]: 30
Element [1][2]: 1
Element [2][0]: 0
Element [2][1]: 0
Element [2][2]: 0

You will see:

- A **3D rectangular bar** drawn on the screen:
  - Top-left corner at `(100, 100)`
  - Bottom-right corner at `(200, 200)`
  - 3D depth of `30`
  - Top face displayed

*(The appearance depends on the values you enter.)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `Bar3DTransform.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\Turboc3\BGI`

---

## 📚 Concepts Demonstrated
- **3D bar drawing with `bar3d()`**
- **User input for transformation values**
- **Basic use of a 3×3 matrix**
- **Graphics operations: `initgraph()`, `bar3d()`, `closegraph()`**

---
