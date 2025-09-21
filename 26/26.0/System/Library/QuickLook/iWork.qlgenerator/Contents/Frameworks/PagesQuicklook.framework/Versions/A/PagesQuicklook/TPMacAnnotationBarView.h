@interface TPMacAnnotationBarView : NSView

@property (nonatomic) BOOL shouldShow;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)resetCursorRects;
- (void)p_setupInstance;

@end
