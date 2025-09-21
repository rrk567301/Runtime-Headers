@interface NSTouchBarCustomizationPreviewFlexibleSectionLayout : NSTouchBarCustomizationPreviewSectionLayout {
    double _cachedVisualCenterXOffset;
}

@property double defaultItemPadding;

- (void)prepareLayout;
- (BOOL)canInsertItem:(id)a0 atIndex:(long long)a1;
- (id)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1 byRemovingItems:(id)a2;
- (id)initWithDelegate:(id)a0 section:(long long)a1;

@end
