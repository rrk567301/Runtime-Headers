@class NSAccessibilityWeakReferenceContainer, NSCollectionViewSectionAccessibility;

@interface NSCollectionViewSupplementaryViewAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_sectionAccessibility;
}

@property (readonly, weak, nonatomic) NSCollectionViewSectionAccessibility *sectionAccessibility;

- (void)dealloc;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithSectionAccessibility:(id)a0;
- (BOOL)accessibilitySupplementaryViewShouldBeIgnored;
- (id)_supplementaryViewTextOnlyChild;
- (id)supplementaryView;
- (id)sectionAccessibility;

@end
