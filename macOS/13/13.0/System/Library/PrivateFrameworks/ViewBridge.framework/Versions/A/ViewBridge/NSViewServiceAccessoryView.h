@class NSViewServiceMarshal;

@interface NSViewServiceAccessoryView : NSView {
    NSViewServiceMarshal *_marshal;
    unsigned char _canBecomeKeyViewInProgress : 1;
    unsigned char _mostRecentDisclosure : 1;
    unsigned char _informingHostOfChangeToGeometry : 1;
    unsigned char _mostRecentAnimationState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenRelativeFrameMostRecentlyReported;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityChildren;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)keyUp:(id)a0;
- (void)renewGState;
- (id)viewServiceMarshal;
- (void)setViewServiceMarshal:(id)a0;
- (void)_informHostOfChangeToGeometry;
- (void)refreshBitmap:(id)a0;
- (void)disclose:(BOOL)a0 withAnimation:(unsigned char)a1;
- (id)accessibilityChildren:(id)a0;
- (void)keyEvent:(id)a0 shouldClimbResponderChain:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameRelativeToWindow;

@end
