@interface MusicUI.OverlayView : JUCustomView {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ onActiveStateChange;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ checkmarkButton;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ descendantIsFirstResponder;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)onOverlayViewClicked:(id)a0;

@end
