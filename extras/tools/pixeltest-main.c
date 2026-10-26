// Pixel test for the Analogue 3D: does it show more than 640 horizontal pixels?
// A toggles between a 640x480 and an 800x480 framebuffer (same 4:3 picture area).
#include <libdragon.h>

static const int widths[] = { 640, 800 };

static void draw (surface_t *fb, int w) {
    graphics_fill_screen(fb, graphics_make_color(0, 0, 0, 255));
    uint32_t white = graphics_make_color(255, 255, 255, 255);
    uint32_t grey = graphics_make_color(128, 128, 128, 255);
    // Four bands of vertical lines: 1px on/off, 2px, 3px, 4px.
    for (int band = 0; band < 4; band++) {
        int period = (band + 1) * 2;
        int y0 = 90 + band * 80;
        for (int x = 40; x < w - 40; x++) {
            if ((x - 40) % period < period / 2) {
                for (int y = y0; y < y0 + 60; y++) graphics_draw_pixel(fb, x, y, white);
            }
        }
        char t[32];
        snprintf(t, sizeof(t), "%dpx lines", band + 1);
        graphics_draw_text(fb, 40, y0 - 12, t);
    }
    // 1px checkerboard square in the corner
    for (int y = 410; y < 460; y++)
        for (int x = 40; x < 140; x++)
            if (((x + y) & 1) == 0) graphics_draw_pixel(fb, x, y, white); else graphics_draw_pixel(fb, x, y, grey);
    char title[64];
    snprintf(title, sizeof(title), "FRAMEBUFFER %d x 480   (A = switch)", w);
    graphics_draw_text(fb, 40, 40, title);
}

int main (void) {
    joypad_init();
    int mode = 0;
    for (;;) {
        display_init((resolution_t) { .width = widths[mode], .height = 480, .interlaced = INTERLACE_HALF, .aspect_ratio = 4.0f / 3.0f },
                     DEPTH_16_BPP, 2, GAMMA_NONE, FILTERS_DISABLED);
        for (;;) {
            surface_t *fb = display_get();
            draw(fb, widths[mode]);
            display_show(fb);
            joypad_poll();
            joypad_buttons_t b = joypad_get_buttons_pressed(JOYPAD_PORT_1);
            if (b.a) break;
        }
        display_close();
        mode ^= 1;
    }
}
