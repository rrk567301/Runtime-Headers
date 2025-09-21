@interface NSTouchBarCustomizationPreviewMiniControlStripSectionLayout : NSTouchBarCustomizationPreviewSectionLayout

@property (readonly) double cachedGrabberMaxXPosition;

+ (Class)layoutAttributesClass;

- (char)canInsertItem:(id)a0 atIndex:(long long)a1;
- (char)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1 byRemovingItems:(id)a2;
- (void)prepareLayout;

@end
