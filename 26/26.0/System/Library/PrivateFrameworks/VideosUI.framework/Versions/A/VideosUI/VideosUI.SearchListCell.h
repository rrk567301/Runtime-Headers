@class VUILabel;

@interface VideosUI.SearchListCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ cellImageView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ descriptionView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topSeparatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
}

@property (nonatomic, retain) VUILabel *resultsContextLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) VUILabel *subtitleLabel;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
