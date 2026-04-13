@interface ToolbarButtonPlus : ButtonPlus {
    BOOL _hasGestureRecognizerInitialMouseLocation;
}

@property (nonatomic) struct CGPoint { double x; double y; } gestureRecognizerInitialMouseLocation;

- (void)mouseDown:(id)a0;

@end
