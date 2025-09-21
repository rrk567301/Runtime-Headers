@class CABackdropLayer, PKDisplayLink, CAMetalLayer;

@interface PKMetalView : NSView {
    CABackdropLayer *_backdropLayer;
    CAMetalLayer *_metalLayer;
    CAMetalLayer *_metalMultiplyLayer;
}

@property (weak, nonatomic) PKDisplayLink *displayLink;
@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (readonly, nonatomic) CAMetalLayer *metalMultiplyLayer;
@property (readonly, nonatomic) char isFixedPixelSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fixedPixelSize;
@property (nonatomic) char doubleBuffered;
@property (nonatomic) char sixChannelBlending;
@property (readonly, nonatomic) char isDrawableAvailable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic) char presentsWithTransaction;
@property (nonatomic) char useLuminanceColorFilter;
@property (nonatomic) unsigned long long pixelFormat;

+ (void)installLuminanceColorFilterOnLayer:(id)a0 lightLuma:(double)a1 darkLuma:(double)a2;
+ (struct CGImage { } *)newLuminanceMapLightLuma:(double)a0 darkLuma:(double)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(unsigned long long)a1;
- (void)flushDrawables;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPixelSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2;
- (void)installLuminanceColorFilter;
- (void)resizeDrawableIfNecessary;
- (void)setFixedPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupMetalLayer:(id)a0;

@end
