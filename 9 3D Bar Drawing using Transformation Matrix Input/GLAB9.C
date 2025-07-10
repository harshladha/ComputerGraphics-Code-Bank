#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int a[3][3], i, j;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Initialize graphics mode

    printf("Enter the elements of the 3x3 transformation matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Drawing 3D bar with transformation values
    bar3d(a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2]);

    getch();  // Wait for user input before closing
    closegraph();
}
