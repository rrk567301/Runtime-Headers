@interface JetUI.JUNavigationBar : NSView {
    void /* unknown type, empty encoding */ stack;
    void /* unknown type, empty encoding */ topItemView;
    void /* unknown type, empty encoding */ cachedFittingSize;
    void /* unknown type, empty encoding */ backTarget;
    void /* unknown type, empty encoding */ backAction;
    void /* unknown type, empty encoding */ standardAppearance;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)topItemViewSizeDidChange:(id)a0;

@end
