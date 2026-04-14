@interface PXYearsLayoutMetrics : PXLayoutMetrics

@property (nonatomic) long long sizeClass;
@property (nonatomic) long long orientation;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double defaultItemAspectRatio;
@property (nonatomic) double multiColumnAspectRatio;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) unsigned long long layoutStyle;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
