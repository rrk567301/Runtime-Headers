@interface NSSegmentItemBezelView : NSWidgetView

- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;
- (int)_defaultVibrancyBlendMode;
- (int)_vibrancyBlendMode;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;

@end
