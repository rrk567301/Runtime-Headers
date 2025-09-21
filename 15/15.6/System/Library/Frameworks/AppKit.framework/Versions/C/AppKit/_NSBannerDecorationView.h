@interface _NSBannerDecorationView : NSView

@property char drawsTopSeparator;
@property char drawsBottomSeparator;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)_coreUIOptions;
- (id)_coreUIOptionsWithBackingScaleFactor:(double)a0;
- (int)_vibrancyBlendMode;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
