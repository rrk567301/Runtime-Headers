@interface SiriUITranscriptClumpViewCollectionView : SiriUIClumpViewCollectionView

- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (long long)accessibilityIndex;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityVisibleChildren;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollInDirection:(unsigned long long)a0;
- (void)_accessibilityPerformScrollUp;
- (void)_accessibilityVerticallyCenterTopOfItem;

@end
