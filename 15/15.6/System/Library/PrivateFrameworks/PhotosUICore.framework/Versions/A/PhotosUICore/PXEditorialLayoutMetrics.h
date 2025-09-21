@interface PXEditorialLayoutMetrics : PXLayoutMetrics

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double headerHeight;
@property (nonatomic) unsigned long long lowerItemCountThreshold;
@property (nonatomic) char useSaliency;
@property (nonatomic) char useNewImplementation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
