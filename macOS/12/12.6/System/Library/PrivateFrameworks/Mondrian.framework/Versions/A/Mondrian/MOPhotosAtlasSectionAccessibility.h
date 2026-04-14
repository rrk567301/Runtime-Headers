@class NSArray, MOPhotosAtlasLayoutAccessibility;

@interface MOPhotosAtlasSectionAccessibility : UXCollectionViewLayoutSectionAccessibility {
    NSArray *_accessibilityChildren;
}

@property (readonly, weak, nonatomic) MOPhotosAtlasLayoutAccessibility *layoutAccessibility;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (void)accessibilityDidEndScrolling;
- (long long)accessibilityRowCount;
- (id)accessibilityVisibleChildren;
- (id)accessibilityTitleUIElement;
- (long long)accessibilityOrientation;
- (void)setAccessibilityChildren:(id)a0;
- (BOOL)accessibilityPerformScrollToVisible;
- (id)initWithLayoutAccessibility:(id)a0;
- (id)siblingBeforeItem:(id)a0;
- (id)siblingAfterItem:(id)a0;
- (id)siblingAboveItem:(id)a0;
- (id)siblingBelowItem:(id)a0;
- (id)_supplementaryViewForIndex:(unsigned long long)a0;

@end
