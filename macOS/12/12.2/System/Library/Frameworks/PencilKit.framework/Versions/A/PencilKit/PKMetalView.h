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

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(unsigned long long)a1;
- (void)resizeDrawableIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPixelSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2;
- (void)initLayer;
- (void)flushDrawables;
- (void)installLuminanceColorFilter;
- (struct CGImage { } *)newLuminanceMap;
- (void)setFixedPixelSize:(struct CGSize { double x0; double x1; })a0;

@end
