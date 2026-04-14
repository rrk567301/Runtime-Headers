@interface NSSegmentItemImageView : _NSStoredImageSimpleImageView

- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;
- (id)_preferredAppearance;
- (int)_vibrancyBlendMode;

@end
