@class NSMutableArray, QLControlsController;

@interface QLControlsCenteringView : NSView

@property (retain) NSMutableArray *controlsCenteringViewConstraints;
@property (weak) QLControlsController *controlsController;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
