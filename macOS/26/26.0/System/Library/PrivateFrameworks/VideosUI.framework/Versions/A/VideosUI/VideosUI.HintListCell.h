@interface VideosUI.HintListCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ shouldShowBottomSeparator;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessoryImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ textViewModel;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
