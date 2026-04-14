@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec>

@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) double nUpDividerWidth;
@property (readonly, nonatomic) long long layoutDirection;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
