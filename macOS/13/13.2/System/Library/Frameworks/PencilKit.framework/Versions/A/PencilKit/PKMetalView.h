@class CABackdropLayer, PKDisplayLink, CAMetalLayer;

@interface PKMetalView : NSView {
    CABackdropLayer *_backdropLayer;
    CAMetalLayer *_metalLayer;
}

@property (weak, nonatomic) PKDisplayLink *displayLink;
@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (readonly, nonatomic) BOOL isFixedPixelSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fixedPixelSize;
@property (nonatomic) BOOL doubleBuffered;
@property (readonly, nonatomic) BOOL isDrawableAvailable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) BOOL useLuminanceColorFilter;
@property (nonatomic) unsigned long long pixelFormat;

+ (struct CGImage { } *)newLuminanceMapLightLuma:(double)a0 darkLuma:(double)a1;
+ (void)installLuminanceColorFilterOnLayer:(id)a0 lightLuma:(double)a1 darkLuma:(double)a2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(unsigned long long)a1;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPixelSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2;
- (void)installLuminanceColorFilter;
- (void)setFixedPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)resizeDrawableIfNecessary;
- (void)flushDrawables;

@end
