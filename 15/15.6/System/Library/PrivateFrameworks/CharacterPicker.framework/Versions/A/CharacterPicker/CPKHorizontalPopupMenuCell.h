@class CPKHorizontalPopupMenuView;

@interface CPKHorizontalPopupMenuCell : NSButtonCell

@property char determinate;
@property double contentSize;
@property CPKHorizontalPopupMenuView *parentView;

- (void)dealloc;
- (id)init;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;

@end
