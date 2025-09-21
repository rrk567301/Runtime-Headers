@protocol _FEFocusItem;

@interface _FEFocusItemRegion : _FEFocusRegion {
    struct { unsigned char itemIsEligibleForFocusOcclusion : 1; unsigned char itemIsFocusable : 1; unsigned char itemIsTransparent : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<_FEFocusItem> item;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_canBeOccludedByRegionsAbove;
- (char)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_defaultFocusItem;
- (id)_descriptionBuilder;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (long long)_preferredDistanceComparisonType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 item:(id)a2 focusSystem:(id)a3;

@end
