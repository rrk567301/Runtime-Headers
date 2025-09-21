@class NSString, NSSet;
@protocol PXGSublayoutFaultingDelegate, PXGStackLayoutSublayoutAlignmentDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    struct { double x0; double x1; double x2; } *_sublayoutOriginsBeforeUpdate;
    NSSet *_sublayoutsToAlignToVisibleTopEdge;
    struct { BOOL shouldAlignSublayoutToVisibleTopEdge; BOOL shouldAlignSublayoutToVisibleBottomEdge; } _sublayoutAlignmentDelegateRespondsTo;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _flexibleRegionInsets;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (weak, nonatomic) id<PXGStackLayoutSublayoutAlignmentDelegate> sublayoutAlignmentDelegate;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)didUpdate;
- (id)init;
- (void)update;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axFrame;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)_updateSublayouts;
- (void)displayScaleDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willUpdate;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })flexibleRegionInsets;
- (void)invalidateAdditionalSafeAreaInsets;
- (void)scrollSpeedRegimeDidChange;
- (struct CGSize { double x0; double x1; })сontentSizeForProposedContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_invalidateFirstFloatingLayout;
- (void)_updateFirstFloatingLayout;
- (void)_updateInterlayoutSpacing;
- (void)_updateSublayoutsForAnchoringSublayoutIndex:(long long)a0 enumerationOptions:(unsigned long long)a1 sublayoutIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldFaultInAnchoringSublayout:(BOOL)a3 sublayoutIndexesToAlignToVisibleTopEdge:(id)a4 subreferenceSize:(struct CGSize { double x0; double x1; })a5 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
- (BOOL)definesContextForPointReferences;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)sublayoutNeedsUpdate:(id)a0;

@end
