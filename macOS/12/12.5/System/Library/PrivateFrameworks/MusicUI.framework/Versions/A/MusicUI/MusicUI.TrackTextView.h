@interface MusicUI.TrackTextView : MusicUI.FlippedView {
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ rankingText;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ artworkSize;
    void /* unknown type, empty encoding */ activeContainerWidth;
    void /* unknown type, empty encoding */ fitSize;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ ternaryLabel;
    void /* unknown type, empty encoding */ rankingLabel;
    void /* unknown type, empty encoding */ titleLabel;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
