@class NSString, PXStoryModel;

@interface PXStoryStyleScrollContentLayout : PXGLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
}

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) long long focusedStyleIndex;
@property (readonly, nonatomic) double focusOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (id)initWithModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateContent;
- (void)_invalidateFocusedStyle;
- (void)_updateFocusedStyle;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)createAnchorForScrollingToStyleFocus:(double)a0;
- (void)referenceSizeDidChange;
- (void)visibleRectDidChange;

@end
