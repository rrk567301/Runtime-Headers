@interface VideosUI.EntityLockupCollectionViewCell : VUIFloatingCollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_subviewsContainerView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ isFollowed;
    void /* unknown type, empty encoding */ lockupLayout;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ lockupImageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ cardBackgroundView;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;

@end
