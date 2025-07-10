# Line Clipping using Region Code Logic (Cohen-Sutherland Approach)

This C++ program demonstrates **line clipping** using region codes inspired by the **Cohen-Sutherland algorithm**. It takes user input for a line and a rectangular window and clips the line to fit within the window if necessary, using logical region checks.

---

## 🚀 How It Works

- Initializes graphics mode with `initgraph()`
- Prompts the user to enter:
  - Coordinates of clipping window (Xmin, Ymin, Xmax, Ymax)
  - Coordinates of the line endpoints (x, y, x1, y1)
- Draws the original clipping rectangle and the unclipped line
- Checks each endpoint to assign **region codes** (top, bottom, left, right)
- Uses logical AND (`&&`) to detect **trivial rejection** (line outside window)
- If partial visibility:
  - Computes **intersection points** of the line with the clipping boundaries using slope-intercept calculations
- Clears screen, redraws the clipping window and clipped line in red
- Waits for key press before exiting

---

## 📋 Sample Output

After entering the following input:

XMin, YMin = 100 100
XMax, YMax = 300 300
Initial Line: (50, 150) to (350, 250)

You’ll see:

- Original full line is drawn first across the screen
- After 1-second delay:
  - The **line gets clipped**
  - Only the visible portion inside the rectangle is shown in **red**
  - Rectangle remains the same

If the line is fully inside the window, a message: No need of clipping as it is already in window

If the line is completely outside: Line is completely outside the window

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `LineClipping.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TURBOC3\BGI`

---

## 📚 Concepts Demonstrated
- **Line Clipping in Computer Graphics**
- **Manual Region Code assignment**
- **Trivial Acceptance and Rejection**
- **Slope-based intersection point calculations**
- **Graphics operations: `rectangle()`, `line()`, `clearviewport()`**
- **Working with user-defined logic for graphical problems**

---



