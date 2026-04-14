@class NSImage;

@interface NSSegmentItemImageView : _NSSimpleImageView

@property (retain, nonatomic) NSImage *image;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (int)_defaultVibrancyBlendMode;
- (id)_preferredAppearance;
- (int)_vibrancyBlendMode;
- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;

@end
