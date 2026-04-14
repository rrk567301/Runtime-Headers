@class NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct { double x0; double x1; double x2; } *_sublayoutOriginsBeforeUpdate;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _flexibleRegionInsets;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)visibleRectDidChange;
- (void)didUpdate;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (long long)scrollableAxis;
- (void)viewEnvironmentDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })flexibleRegionInsets;
- (void)_updateSublayouts;
- (void)_updateInterlayoutSpacing;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)invalidateAdditionalSafeAreaInsets;

@end
