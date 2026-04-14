@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _paused;
    BOOL _forcingPaused;
    BOOL _effectivePaused;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)framebufferOnly;
- (BOOL)isPaused;
- (id)layer;
- (void)setPaused:(BOOL)a0;
- (BOOL)isDrawableAvailable;
- (void)setFramebufferOnly:(BOOL)a0;
- (id)currentDrawable;
- (BOOL)isForcingPause;
- (void)_willDraw;
- (void)_didDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
