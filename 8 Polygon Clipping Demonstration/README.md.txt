# Polygon Clipping Demonstration

This C++ program demonstrates **polygon clipping** by drawing a user-defined polygon over a fixed rectangular clipping window using `graphics.h`. It visually shows the area inside the window and uses fill to simulate clipping.

---

## 🚀 How It Works

- Initializes graphics mode with `initgraph()`
- Defines a fixed rectangular clipping window using a vertex array
- Draws the window in **red**
- Prompts the user to enter:
  - The number of vertices in the polygon
  - The coordinates of each vertex
- Stores the polygon vertices in an array, appending the first point at the end to close the shape
- Draws the polygon in **white** over the window
- Waits for a key press to simulate clipping:
  - Redraws the window
  - Fills the outside area with **black** using `floodfill()` to highlight the clipped region
- Displays a message indicating the clipped polygon
- Clears the screen and closes the graphics mode after another key press

---

## 📋 Sample Output

Example flow:

1. User is prompted:

Enter the no. of vertices of polygon: 4
Enter the coordinates of points:
(x0,y0): 100,100
(x1,y1): 300,100
(x2,y2): 300,300
(x3,y3): 100,300

2. You see:

- A **red rectangle** representing the clipping window
- A **white polygon** over it
- Message: "Press a button to clip a polygon..."

3. After pressing a key:

- The window is redrawn in red
- The area outside the window is filled black to visually indicate the clipped region
- Message: "This is the clipped polygon.."

*(Note: The polygon itself is not algorithmically clipped—this is a visual simulation)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your source file (e.g., `PolygonClipDemo.cpp`)
3. **Compile > Run**

Make sure the `BGI` graphics driver is available at: `C:\TURBOC3\BGI`

---

## 📚 Concepts Demonstrated
- **Polygon drawing with `drawpoly()`**
- **User input of dynamic polygon vertices**
- **Visual simulation of clipping using `floodfill()`**
- **Graphics operations: `setcolor()`, `setfillstyle()`, `drawpoly()`**
- **Simple visual techniques to indicate clipped areas**

---
