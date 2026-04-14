@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F14_FocusRingView : NSView {
    void /* unknown type, empty encoding */ focused;
    void /* unknown type, empty encoding */ contentPath;
    void /* unknown type, empty encoding */ responder;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMask;

@end
