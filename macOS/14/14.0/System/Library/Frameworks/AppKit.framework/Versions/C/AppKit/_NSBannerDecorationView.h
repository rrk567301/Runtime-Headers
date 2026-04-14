@interface _NSBannerDecorationView : NSView

@property BOOL drawsTopSeparator;
@property BOOL drawsBottomSeparator;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)_coreUIOptions;
- (int)_vibrancyBlendMode;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
