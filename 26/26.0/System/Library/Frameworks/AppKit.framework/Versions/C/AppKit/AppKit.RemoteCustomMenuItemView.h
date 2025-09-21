@interface AppKit.RemoteCustomMenuItemView : NSView {
    void /* unknown type, empty encoding */ menuItem;
    void /* unknown type, empty encoding */ currentFrameOnScreen;
    void /* unknown type, empty encoding */ trackingArea;
}

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cursorUpdate:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)renewGState;
- (void)windowDidMove;

@end
