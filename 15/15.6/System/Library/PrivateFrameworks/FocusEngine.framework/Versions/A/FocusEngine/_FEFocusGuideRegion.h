@protocol _FEFocusEnvironment, _FEFocusGuideRegionDelegate;

@interface _FEFocusGuideRegion : _FEFocusRegion

@property (nonatomic, setter=_setIsUnoccludable:) char _isUnoccludable;
@property (nonatomic, setter=_setFocusPriority:) float _focusPriority;
@property (nonatomic, setter=_setIgnoresSpeedBumpEdges:) char _ignoresSpeedBumpEdges;
@property (nonatomic, setter=_setIsUnclippable:) char _isUnclippable;
@property (weak, nonatomic) id<_FEFocusGuideRegionDelegate> delegate;
@property (weak, nonatomic) id<_FEFocusEnvironment> owningEnvironment;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_canBeOccludedByRegionsAbove;
- (char)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)a0;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1 withSnapshot:(id)a2;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (char)_isEnabledForFocusedRegion:(id)a0 inSnapshot:(id)a1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (long long)_preferredDistanceComparisonType;
- (char)_shouldCropRegionToSearchArea;
- (char)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;

@end
