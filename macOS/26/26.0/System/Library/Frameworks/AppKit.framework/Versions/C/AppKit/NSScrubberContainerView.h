@interface NSScrubberContainerView : NSView

@property BOOL centerSubviews;
@property (retain) id innerView;

+ (id)keyPathsForValuesInvalidatingLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)wantsUpdateLayer;

@end
