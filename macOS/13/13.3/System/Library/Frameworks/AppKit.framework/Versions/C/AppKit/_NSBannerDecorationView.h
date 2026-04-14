@interface _NSBannerDecorationView : NSView

@property BOOL drawsTopSeparator;
@property BOOL drawsBottomSeparator;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)_coreUIOptions;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
