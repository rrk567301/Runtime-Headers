@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics

@property (readonly, nonatomic) PXCompositeEditorialLayoutSpec *editorialLayoutSpec;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL useSaliency;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
