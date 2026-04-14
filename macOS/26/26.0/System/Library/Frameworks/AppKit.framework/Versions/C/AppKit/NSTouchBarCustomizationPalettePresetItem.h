@class NSArray, NSRoundedRectView, NSLayoutConstraint;

@interface NSTouchBarCustomizationPalettePresetItem : NSCollectionViewItem {
    NSLayoutConstraint *_maxTextWidthConstraint;
    double _paletteScaleFactor;
    NSLayoutConstraint *_textSpacingConstraint;
    NSArray *_insetConstraints;
    NSRoundedRectView *_roundedRectView;
}

- (id)accessibilityLabel;
- (void)loadView;
- (void)dealloc;
- (id)accessibilityIdentifier;
- (void)applyLayoutAttributes:(id)a0;
- (void)setRepresentedObject:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelp;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;

@end
