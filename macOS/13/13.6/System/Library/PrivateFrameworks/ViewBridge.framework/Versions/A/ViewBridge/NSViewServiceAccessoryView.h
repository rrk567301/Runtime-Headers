@class NSViewServiceMarshal;

@interface NSViewServiceAccessoryView : NSView {
    NSViewServiceMarshal *_marshal;
    unsigned char _canBecomeKeyViewInProgress : 1;
    unsigned char _mostRecentDisclosure : 1;
    unsigned char _informingHostOfChangeToGeometry : 1;
    unsigned char _mostRecentAnimationState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenRelativeFrameMostRecentlyReported;
}

- (BOOL)acceptsFirstResponder;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)renewGState;
- (BOOL)resignFirstResponder;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameRelativeToWindow;
- (void)_informHostOfChangeToGeometry;
- (id)accessibilityChildren:(id)a0;
- (void)disclose:(BOOL)a0 withAnimation:(unsigned char)a1;
- (void)keyEvent:(id)a0 shouldClimbResponderChain:(id /* block */)a1;
- (void)refreshBitmap:(id)a0;
- (void)setViewServiceMarshal:(id)a0;
- (id)viewServiceMarshal;

@end
