@interface VideosUI.OfferListLockupCell : VUIListFloatingCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ enableHighlight;
    void /* unknown type, empty encoding */ templateController;
    void /* unknown type, empty encoding */ containerView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(BOOL)a0;

@end
