@interface PAOpenGLLayer : CAOpenGLLayer {
    BOOL _needsDisplay;
}

- (BOOL)canDraw;
- (struct _CGLPixelFormatObject { } *)copyCGLPixelFormatForDisplayMask:(unsigned int)a0;
- (struct _CGLContextObject { } *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (void)drawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (void)releaseCGLContext:(struct _CGLContextObject { } *)a0;
- (void)drawInOpenGLContext:(id)a0;

@end
