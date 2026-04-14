@interface VideosUI.OrdinalCardCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ cellImageView;
    void /* unknown type, empty encoding */ numberLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ overlayView;
}

- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityCustomActions;
- (id)accessibilityRole;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
