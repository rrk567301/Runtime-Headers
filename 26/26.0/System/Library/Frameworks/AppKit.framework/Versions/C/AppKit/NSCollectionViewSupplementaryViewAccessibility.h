@class NSAccessibilityWeakReferenceContainer, NSCollectionViewSectionAccessibility;

@interface NSCollectionViewSupplementaryViewAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_sectionAccessibility;
}

@property (readonly, weak, nonatomic) NSCollectionViewSectionAccessibility *sectionAccessibility;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)accessibilityRole;
- (id)_supplementaryViewTextOnlyChild;
- (id)accessibilityLastContentSibling;
- (id)accessibilityChildren;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityParent;
- (BOOL)accessibilitySupplementaryViewShouldBeIgnored;
- (id)initWithSectionAccessibility:(id)a0;
- (id)sectionAccessibility;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;

@end
