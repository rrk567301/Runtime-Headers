@class NSLayoutConstraint;

@interface NSTouchBarCustomizationPaletteItem : NSCollectionViewItem {
    NSLayoutConstraint *_maxTextWidthConstraint;
    double _paletteScaleFactor;
    NSLayoutConstraint *_textSpacingConstraint;
}

- (void)setRepresentedObject:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityIdentifier;
- (id)accessibilityHelp;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;

@end
