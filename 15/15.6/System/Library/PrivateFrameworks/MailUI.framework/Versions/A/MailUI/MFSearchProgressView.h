@interface MFSearchProgressView : NSView

@property (nonatomic, getter=isAnimating) char animating;

- (void)invalidateLayout;
- (void)setAnimating:(char)a0 fade:(char)a1;

@end
