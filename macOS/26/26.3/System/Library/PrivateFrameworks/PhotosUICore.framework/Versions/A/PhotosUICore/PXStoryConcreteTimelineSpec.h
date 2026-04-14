@class NSIndexSet;

@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedSegmentDuration;
@property (nonatomic) unsigned long long allowedInlineTitles;
@property (retain, nonatomic) NSIndexSet *allowedTransitionKinds;
@property (nonatomic) char fallbackTransitionKind;
@property (nonatomic) unsigned long long storyTransitionCurveType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) double nUpDividerWidth;
@property (readonly, nonatomic) long long layoutDirection;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
