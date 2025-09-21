@interface NSTouchBarCustomizationPreviewLayoutSectionAccessibility : NSCollectionViewSectionAccessibility

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityHiddenAttribute;
- (BOOL)accessibilityIsHiddenAttributeSettable;
- (BOOL)isAccessibilityHidden;
- (id)sectionLayout;
- (id)sectionLayoutDelegate;

@end
