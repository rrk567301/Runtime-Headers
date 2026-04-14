@interface FI_TIconViewController : FI_TCollectionViewItem

+ (id)itemIdentifier;

- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (BOOL)_hasOpaquePartsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_titleViews;
- (id)iconView;
- (void)setHighlightState:(long long)a0;
- (void)draggingExited;
- (id)iconViewNoLoad;
- (void)receivedDrop;
- (void)setUseActiveAppearance:(BOOL)a0;
- (void)updateHighlightedOrSelectedAppearance;
- (void)validatedDrop:(const void *)a0;

@end
