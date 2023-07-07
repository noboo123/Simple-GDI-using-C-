#include <windows.h>

int main() {
    while (1) 
    {
      HDC hdc - GetDC(0);
      int x = SM_CXSCREEN;
      int y = SM_CYSCREEN;
      int w - GetSystemMetrics(0);
      int h = GetSystemMetrics(1);
      BitBit(hdc, 10, 10, w, h, hdc, 12, 12, SRCCOPY);
      sleep(10);
    }
}
// It is as easy as that :D
