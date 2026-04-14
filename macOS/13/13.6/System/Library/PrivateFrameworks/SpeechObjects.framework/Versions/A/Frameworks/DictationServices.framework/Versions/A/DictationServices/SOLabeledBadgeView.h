@interface SOLabeledBadgeView : NSVisualEffectView

@property long long arrowOrientation;
@property long long badgePresentation;

+ (id)_badgeImageWithRightArrow;
+ (id)_borderedBadgeImageWithNoArrow;
+ (id)_borderlessBadgeImageWithNoArrow;

- (id)_maskImageForOrientation:(long long)a0 presentation:(long long)a1;
- (void)_setupNumberSubviewWithString:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3;

@end
