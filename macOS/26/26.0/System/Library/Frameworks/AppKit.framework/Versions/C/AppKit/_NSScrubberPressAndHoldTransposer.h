@class NSScrubber;
@protocol _NSGestureEnvironment;

@interface _NSScrubberPressAndHoldTransposer : NSTouchBarStandardPopoverTransposer {
    NSScrubber *_targetScrubber;
    id<_NSGestureEnvironment> _gestureEnvironment;
    unsigned char _trackingLatched : 1;
}

- (void)dealloc;
- (void)transposeTouch:(id)a0;
- (void)_sendTransposedEvent:(id)a0;
- (id)initWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
