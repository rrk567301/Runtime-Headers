@interface WorkflowUICore.WFKeyboardShortcutView : NSTextView {
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ onFocusChange;
    void /* unknown type, empty encoding */ beginFocused;
    void /* unknown type, empty encoding */ shortcut;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
