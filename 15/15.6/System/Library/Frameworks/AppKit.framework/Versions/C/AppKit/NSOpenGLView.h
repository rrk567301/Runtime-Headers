@class NSOpenGLPixelFormat, NSOpenGLContext;

@interface NSOpenGLView : NSView {
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
}

@property (retain) NSOpenGLContext *openGLContext;
@property (retain) NSOpenGLPixelFormat *pixelFormat;
@property char wantsBestResolutionOpenGLSurface;
@property char wantsExtendedDynamicRangeOpenGLSurface;

+ (void)initialize;
+ (id)defaultPixelFormat;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reshape;
- (id)_invalidateGStatesForTree;
- (void)_surfaceNeedsUpdate:(id)a0;
- (void)clearGLContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(id)a1;
- (char)isOpaque;
- (long long)layerContentsRedrawPolicy;
- (char)lockFocusIfCanDraw;
- (id)makeBackingLayer;
- (void)prepareOpenGL;
- (void)setLayer:(id)a0;
- (void)update;
- (void)viewDidChangeBackingProperties;
- (char)wantsLayer;

@end
