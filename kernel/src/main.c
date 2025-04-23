#include "draw/draw.h"
#include "draw/text/text.h"
#include "limine.h"

__attribute__((used, section(".limine_requests")))
static volatile LIMINE_BASE_REVISION(3);


__attribute__((used, section(".limine_requests")))
static volatile struct limine_framebuffer_request framebuffer_request = {
    .id = LIMINE_FRAMEBUFFER_REQUEST,
    .revision = 0
};


__attribute__((used, section(".limine_requests_start")))
static volatile LIMINE_REQUESTS_START_MARKER;

__attribute__((used, section(".limine_requests_end")))
static volatile LIMINE_REQUESTS_END_MARKER;




static VOID hcf(VOID) {
    for (;;) {
        asm ("hlt");
    }
}

VOID KiMain(VOID) {
    if (LIMINE_BASE_REVISION_SUPPORTED == FALSE) {
        hcf();
    }

    if (framebuffer_request.response == NULL
     || framebuffer_request.response->framebuffer_count < 1) {
        hcf();
    }
    struct limine_framebuffer* framebuffer = framebuffer_request.response->framebuffers[0];
    KiStartFrameBuffer(framebuffer);

    KiDrawString("", 10, 10, 2, 0xffffff);
    
    hcf();
}
