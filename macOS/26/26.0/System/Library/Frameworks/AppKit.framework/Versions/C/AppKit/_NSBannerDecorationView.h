@interface _NSBannerDecorationView : NSView {
    BOOL _drawsTopSeparator;
    BOOL _drawsBottomSeparator;
}

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (id)_coreUIOptions;
- (id)_coreUIOptionsWithBackingScaleFactor:(double)a0;
- (int)_vibrancyBlendMode;
- (BOOL)wantsUpdateLayer;

@end
