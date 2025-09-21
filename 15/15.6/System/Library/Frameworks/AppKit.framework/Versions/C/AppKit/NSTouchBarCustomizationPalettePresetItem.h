@class NSArray, NSRoundedRectView, NSLayoutConstraint;

@interface NSTouchBarCustomizationPalettePresetItem : NSCollectionViewItem {
    NSLayoutConstraint *_maxTextWidthConstraint;
    double _paletteScaleFactor;
    NSLayoutConstraint *_textSpacingConstraint;
    NSArray *_insetConstraints;
    NSRoundedRectView *_roundedRectView;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (char)_viewControllerSupports10_10Features;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelp;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;

@end
