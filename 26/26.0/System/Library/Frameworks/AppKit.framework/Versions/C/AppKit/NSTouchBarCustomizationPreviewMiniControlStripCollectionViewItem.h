@class CALayer;

@interface NSTouchBarCustomizationPreviewMiniControlStripCollectionViewItem : NSTouchBarCustomizationPreviewCollectionViewItem {
    CALayer *_leftCornerRadiusMask;
    CALayer *_rightCornerRadiusMask;
}

- (void)loadView;
- (void)applyLayoutAttributes:(id)a0;
- (void)_updateJiggle;
- (id)preferredViewAppearanceShowingAppState:(BOOL)a0;

@end
