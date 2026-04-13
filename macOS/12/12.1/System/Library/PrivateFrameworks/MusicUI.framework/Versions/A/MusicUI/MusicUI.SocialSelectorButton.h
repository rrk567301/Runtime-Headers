@interface MusicUI.SocialSelectorButton : MusicUI.FlippedView {
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ imageCatalog;
    void /* unknown type, empty encoding */ shouldDisplayArtwork;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clickGestureRecognizer;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ checkmarkButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onButtonClicked:(id)a0;

@end
