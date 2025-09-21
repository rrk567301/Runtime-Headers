@interface MusicUI.AccessorySocialProfileView : JUCustomView {
    void /* unknown type, empty encoding */ socialPerson;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ artworkView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;

@end
