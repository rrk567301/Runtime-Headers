@interface AccessibilityReadingUI.AXRNSTextView : NSTextView {
    void /* unknown type, empty encoding */ arrowScrollDelegate;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ maxContentWidth;
    void /* unknown type, empty encoding */ padding;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityProtectedContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)performTextFinderAction:(id)a0;

@end
