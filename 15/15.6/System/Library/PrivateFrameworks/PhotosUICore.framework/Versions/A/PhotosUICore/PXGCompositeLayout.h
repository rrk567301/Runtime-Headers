@class PXGSublayoutComposition, NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    char _isUpdatingSublayouts;
    long long *_currentSingleLayouts;
    long long *_pendingSingleLayouts;
    char *_pendingAnimations;
}

@property (readonly, nonatomic) char wantsCustomAlphaForSublayouts;
@property (readonly, nonatomic) char allowsRepeatedSublayoutsUpdates;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (retain, nonatomic) PXGSublayoutComposition *composition;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)didUpdate;
- (id)initWithComposition:(id)a0;
- (void)_updateSublayoutOfStylableType:(long long)a0;
- (void)_invalidateStylableType:(long long)a0;
- (void)_invalidateSublayouts;
- (void)_updateSublayouts;
- (double)alphaForSublayout:(id)a0 atIndex:(long long)a1;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)compositionDidChange;
- (char)definesContextForPointReferences;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)didApplySublayoutChangeDetails:(id)a0 axAdjustedSubgroupChangeDetails:(id)a1 countAfterChanges:(long long)a2;
- (void)didUpdateSublayouts;
- (void)displayScaleDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)invalidateSublayouts;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)setSublayoutIndex:(long long)a0 forUniquelyStylableType:(long long)a1 animated:(char)a2;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willUpdate;

@end
