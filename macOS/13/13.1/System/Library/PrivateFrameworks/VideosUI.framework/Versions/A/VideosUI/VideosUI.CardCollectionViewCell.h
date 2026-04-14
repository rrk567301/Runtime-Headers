@interface VideosUI.CardCollectionViewCell : VUIFloatingCollectionViewCell {
    void /* unknown type, empty encoding */ cardViewLayout;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ syndicationId;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)vui_cellWillBeDisplayed;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;

@end
