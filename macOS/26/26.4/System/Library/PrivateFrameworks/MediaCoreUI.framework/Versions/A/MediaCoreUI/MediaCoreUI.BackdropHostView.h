@interface MediaCoreUI.BackdropHostView : NSView {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ intensity;
    void /* unknown type, empty encoding */ crossfadeDuration;
    void /* unknown type, empty encoding */ allowsDisplayCompositing;
}

- (void)layout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
