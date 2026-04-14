@interface SiriUITranscriptClumpViewCollectionView : SiriUIClumpViewCollectionView

- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityVisibleChildren;
- (id)accessibilityIdentifier;
- (void)_accessibilityVerticallyCenterTopOfItem;
- (void)_accessibilityPerformScrollInDirection:(unsigned long long)a0;
- (void)_accessibilityPerformScrollUp;
- (void)_accessibilityPerformScrollDown;

@end
