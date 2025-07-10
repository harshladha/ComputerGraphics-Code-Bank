# Line Clipping using Region Code Logic (Cohen-Sutherland Approach)

This C++ program demonstrates **line clipping** using region codes inspired by the **Cohen-Sutherland algorithm**. It takes user input for a line and a rectangular window and clips the line to fit within the window if necessary, using logical region checks.

---

## 🚀 How It Works

- Initializes graphics mode with `initgraph()`
- Prompts the user to enter:
  - Coordinates of the clipping window (XMin, YMin, XMax, YMax)
  - Coordinates of the line endpoints (x, y, x1, y1)
- Draws the clipping rectangle and the original unclipped line
- Assigns **region codes** to each endpoint to determine their position relative to the clipping window:
  - Top
  - Bottom
  - Right
  - Left
- Checks for:
  - **Trivial Acceptance:** Line fully inside the window
  - **Trivial Rejection:** Line fully outside the window
  - **Partial Clipping:** Line partially inside and requires clipping
- If clipping is needed:
  - Calculates intersection points using the slope-intercept formula
  - Updates endpoints accordingly
- Clears the viewport, redraws the clipping window and clipped line in **red**
- Waits for key press before closing

---

## 📋 Sample Output

After entering the following input:

XMin, YMin = 100 100
XMax, YMax = 300 300
Initial Line: (50, 150) to (350, 250)

You’ll see:

- The **original full line** drawn across the screen
- After 1-second delay:
  - The **line gets clipped**
  - Only the segment within the rectangle remains, drawn in **red**
  - Rectangle remains unchanged

If the line is completely inside the window: No need of clipping as it is already in window

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
- **Region Code assignment and checking**
- **Trivial Acceptance and Rejection**
- **Intersection point calculation with slope**
- **Graphics operations: `rectangle()`, `line()`, `clearviewport()`**
- **Working with user-defined logic for graphical clipping**

---
