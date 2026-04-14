@protocol SSCallTrackingViewDelegate;

@interface SSCallTrackingView : NSView

@property id<SSCallTrackingViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;

@end
