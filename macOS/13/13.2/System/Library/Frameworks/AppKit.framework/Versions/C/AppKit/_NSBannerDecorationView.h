@interface _NSBannerDecorationView : NSView

@property BOOL drawsTopSeparator;
@property BOOL drawsBottomSeparator;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)_coreUIOptions;

@end
