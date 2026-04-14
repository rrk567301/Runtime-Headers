@class NSView, NSOpenGLPixelFormat, NSOpenGLContext;

@interface NSOpenGLLayer : CAOpenGLLayer

@property (weak) NSView *view;
@property (retain) NSOpenGLPixelFormat *openGLPixelFormat;
@property (retain) NSOpenGLContext *openGLContext;

+ (id)defaultValueForKey:(id)a0;

- (void)willChangeValueForKey:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)display;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)NS_suggestedContentsScaleDidChange;
- (struct _CGLPixelFormatObject { } *)copyCGLPixelFormatForDisplayMask:(unsigned int)a0;
- (struct _CGLContextObject { } *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (void)drawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (id)openGLPixelFormatForDisplayMask:(unsigned int)a0;
- (id)openGLContextForPixelFormat:(id)a0;
- (BOOL)canDrawInOpenGLContext:(id)a0 pixelFormat:(id)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (void)drawInOpenGLContext:(id)a0 pixelFormat:(id)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (oneway void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (oneway void)releaseCGLContext:(struct _CGLContextObject { } *)a0;

@end
