@interface PXAspectFitLayoutMetrics : PXLayoutMetrics

@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long minTilesPerRow;
@property (nonatomic) long long maxTilesPerRow;
@property (nonatomic) double minRowAspectRatio;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
