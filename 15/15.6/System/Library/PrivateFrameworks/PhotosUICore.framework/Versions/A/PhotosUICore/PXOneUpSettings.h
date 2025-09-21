@interface PXOneUpSettings : PXSettings

@property (nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;
@property (nonatomic) char hideFloatingInfoPanel;
@property (nonatomic) char reverseFavoritesOneUpSortOrder;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;
- (char)shouldInitiallyZoomContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;
- (double)zoomFactorForContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;

@end
