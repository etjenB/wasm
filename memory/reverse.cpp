#include <emscripten.h>

extern "C" {
    void EMSCRIPTEN_KEEPALIVE reverse(int* arr, int len) {
        for (int i = 0; i < len / 2; i++) {
            int tmp = arr[i];
            arr[i] = arr[len - i - 1];
            arr[len - i - 1] = tmp;
        }
    }
}

int main() {
    // Dummy main function
    return 0;
}
