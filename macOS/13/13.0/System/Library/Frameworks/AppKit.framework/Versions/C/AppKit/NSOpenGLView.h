@class NSOpenGLPixelFormat, NSOpenGLContext;

@interface NSOpenGLView : NSView {
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
}

@property (retain) NSOpenGLContext *openGLContext;
@property (retain) NSOpenGLPixelFormat *pixelFormat;
@property BOOL wantsBestResolutionOpenGLSurface;
@property BOOL wantsExtendedDynamicRangeOpenGLSurface;

+ (void)initialize;
+ (id)defaultPixelFormat;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setLayer:(id)a0;
- (id)makeBackingLayer;
- (BOOL)wantsLayer;
- (id)_invalidateGStatesForTree;
- (void)viewDidChangeBackingProperties;
- (long long)layerContentsRedrawPolicy;
- (void)prepareOpenGL;
- (void)reshape;
- (void)_surfaceNeedsUpdate:(id)a0;
- (BOOL)lockFocusIfCanDraw;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(id)a1;
- (void)clearGLContext;

@end
