@class NSMutableArray;

@interface QLControlSegmentedControl : NSSegmentedControl {
    NSMutableArray *_controlSegments;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewDidHide;
- (void)viewDidUnhide;
- (void)addSegment:(id)a0;
- (void)removeSegment:(id)a0;
- (void)segmentedControlPressed:(id)a0;
- (void)updateSegment:(id)a0 forWindow:(id)a1;
- (id)segmentForEvent:(id)a0;
- (double)MediaUI_slice;

@end
