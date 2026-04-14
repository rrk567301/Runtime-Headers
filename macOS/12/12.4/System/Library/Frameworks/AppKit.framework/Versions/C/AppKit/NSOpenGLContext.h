@class NSOpenGLPixelFormat, NSView;

@interface NSOpenGLContext : NSObject <NSLocking> {
    NSView *_view;
    struct _CGLContextObject { } *_CGLContext;
}

@property (class, retain) NSOpenGLContext *currentContext;

@property (readonly) struct CGSize { double x0; double x1; } defaultFramebufferDimensions;
@property (readonly) BOOL hasDefaultFramebuffer;
@property (readonly) NSOpenGLPixelFormat *pixelFormat;
@property (weak) NSView *view;
@property int currentVirtualScreen;
@property (readonly) struct _CGLContextObject { } *CGLContextObj;

+ (void)initialize;
+ (void)clearCurrentContext;
+ (id)openGLContextWithCGLContextObj:(struct _CGLContextObject { } *)a0;

- (void)dealloc;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (void)update;
- (void)clearDrawable;
- (void)_viewDidChangeGeometryInWindow:(id)a0;
- (void)_updateOpenGLViewport;
- (id)initWithCGLContextObj:(struct _CGLContextObject { } *)a0;
- (void)makeCurrentContext;
- (void)setValues:(const int *)a0 forParameter:(long long)a1;
- (id)initWithFormat:(id)a0 shareContext:(id)a1;
- (void)copyAttributesFromContext:(id)a0 withMask:(unsigned int)a1;
- (void)flushBuffer;
- (void)_surfaceWillGoAway:(id)a0;
- (void)_surfaceDidComeBack:(id)a0;
- (void)setOffScreen:(void *)a0 width:(int)a1 height:(int)a2 rowbytes:(int)a3;
- (void)setFullScreen;
- (void)getValues:(int *)a0 forParameter:(long long)a1;
- (void)createTexture:(unsigned int)a0 fromView:(id)a1 internalFormat:(unsigned int)a2;
- (BOOL)texImageIOSurface:(id)a0 target:(unsigned int)a1 internalFormat:(unsigned int)a2 width:(int)a3 height:(int)a4 format:(unsigned int)a5 type:(unsigned int)a6 plane:(unsigned int)a7;
- (id)pixelBuffer;
- (void)setPixelBuffer:(id)a0 cubeMapFace:(unsigned int)a1 mipMapLevel:(int)a2 currentVirtualScreen:(int)a3;
- (unsigned int)pixelBufferCubeMapFace;
- (int)pixelBufferMipMapLevel;
- (void)setTextureImageToPixelBuffer:(id)a0 colorBuffer:(unsigned int)a1;

@end
