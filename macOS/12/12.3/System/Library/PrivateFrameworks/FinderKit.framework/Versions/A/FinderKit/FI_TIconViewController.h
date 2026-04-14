@interface FI_TIconViewController : FI_TCollectionViewItem

+ (id)itemIdentifier;

- (void)loadView;
- (id)iconView;
- (void)setSelected:(BOOL)a0;
- (void)setHighlightState:(long long)a0;
- (BOOL)_hasOpaquePartsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_titleViews;
- (void)setUseActiveAppearance:(BOOL)a0;
- (void)updateHighlightedOrSelectedAppearance;
- (id)iconViewNoLoad;

@end
