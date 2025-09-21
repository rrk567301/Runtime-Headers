@interface GameCenterUI.ErrorShieldView : NSView {
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ retryHandler;
}

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
