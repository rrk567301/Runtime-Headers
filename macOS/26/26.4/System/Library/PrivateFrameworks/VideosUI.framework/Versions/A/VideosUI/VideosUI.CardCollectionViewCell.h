@interface VideosUI.CardCollectionViewCell : VideosUI.FloatingCollectionViewCell {
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ isLockupSelected;
    void /* unknown type, empty encoding */ isLockupSelectionHidden;
    void /* unknown type, empty encoding */ cardViewLayout;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ syndicationId;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (id)accessibilityChildren;
- (void)didSelectContextMenuAction;
- (void)didSelectPlayButtonAction;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(BOOL)a0;

@end
