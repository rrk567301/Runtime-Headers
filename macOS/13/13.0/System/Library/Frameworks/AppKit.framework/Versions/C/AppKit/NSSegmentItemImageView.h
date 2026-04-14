@class NSImage;

@interface NSSegmentItemImageView : _NSSimpleImageView

@property (retain, nonatomic) NSImage *image;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)viewDidChangeEffectiveAppearance;
- (id)_preferredAppearance;
- (BOOL)isAccessibilityElement;
- (int)_vibrancyBlendMode;
- (int)_defaultVibrancyBlendMode;

@end
