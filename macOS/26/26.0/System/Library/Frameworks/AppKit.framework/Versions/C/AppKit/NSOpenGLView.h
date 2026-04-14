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

- (BOOL)isOpaque;
- (void)setLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)update;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)reshape;
- (id)_invalidateGStatesForTree;
- (void)_surfaceNeedsUpdate:(id)a0;
- (void)clearGLContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(id)a1;
- (long long)layerContentsRedrawPolicy;
- (BOOL)lockFocusIfCanDraw;
- (id)makeBackingLayer;
- (void)prepareOpenGL;
- (BOOL)wantsLayer;

@end
