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
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayer:(id)a0;
- (id)makeBackingLayer;
- (BOOL)wantsLayer;
- (id)_invalidateGStatesForTree;
- (BOOL)lockFocusIfCanDraw;
- (long long)layerContentsRedrawPolicy;
- (void)viewDidChangeBackingProperties;
- (void)prepareOpenGL;
- (void)reshape;
- (void)_surfaceNeedsUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(id)a1;
- (void)clearGLContext;

@end
