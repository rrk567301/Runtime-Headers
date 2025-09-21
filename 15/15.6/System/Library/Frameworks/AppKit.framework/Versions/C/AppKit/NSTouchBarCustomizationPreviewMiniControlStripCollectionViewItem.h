@class CALayer;

@interface NSTouchBarCustomizationPreviewMiniControlStripCollectionViewItem : NSTouchBarCustomizationPreviewCollectionViewItem {
    CALayer *_leftCornerRadiusMask;
    CALayer *_rightCornerRadiusMask;
}

- (void)_updateJiggle;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (id)preferredViewAppearanceShowingAppState:(char)a0;

@end
