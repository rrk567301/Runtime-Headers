@interface IOGPUMetalGLDrawable : NSObject {
    struct __IOGPUGLDrawable { } *_drawableRef;
    struct IOGPUDrawableSurfaceConfig { unsigned long long window_mode; int width; int height; int sfc_width; int sfc_height; unsigned int config_bits; unsigned int status_bits; unsigned long long texture_ram; } _surfaceConfig;
}

- (void)dealloc;
- (unsigned int)width;
- (unsigned int)height;
- (int)signalSharedEvent:(id)a0 value:(unsigned long long)a1 operation:(unsigned long long)a2;
- (int)clearDrawable;
- (int)setDrawableSurface:(unsigned int)a0 mode:(unsigned long long)a1 colorDepthMode:(unsigned int)a2 face:(unsigned int)a3 level:(unsigned int)a4 volatile:(unsigned int)a5 fixedSource:(unsigned int)a6 scaleOptions:(unsigned int)a7 scaledWidth:(unsigned int)a8 scaledHeight:(unsigned int)a9;
- (int)setSwapRectX:(unsigned int)a0 y:(unsigned int)a1 w:(unsigned int)a2 h:(unsigned int)a3;
- (int)setSwapInterval:(int)a0 limit:(int)a1;
- (id)lookupIOSurfaceAtIndex:(unsigned long long)a0;
- (unsigned long long)windowMode;
- (unsigned int)surfaceWidth;
- (unsigned int)surfaceHeight;
- (id)initWithDevice:(id)a0;

@end
