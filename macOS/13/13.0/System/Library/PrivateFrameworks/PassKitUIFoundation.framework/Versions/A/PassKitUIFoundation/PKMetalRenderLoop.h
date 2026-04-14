@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)framebufferOnly;
- (id)layer;
- (BOOL)isDrawableAvailable;
- (void)setFramebufferOnly:(BOOL)a0;
- (id)currentDrawable;
- (void)_didInvalidate;
- (BOOL)_isForcingPause;
- (void)_willDraw;
- (void)_didDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
