@interface NSScrubberContainerView : NSView

@property char centerSubviews;
@property (retain) id innerView;

+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)wantsUpdateLayer;

@end
