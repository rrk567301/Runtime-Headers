@class NSString, PXStoryModel;

@interface PXStoryModelTimelineLayout : PXStoryTimelineLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (id)initWithModel:(id)a0;
- (void)didUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)configureClipLayout:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)invalidateClipsCornerRadius;
- (void)invalidateDisplayedRect;
- (void)invalidateDisplayedTimeRange;
- (void)invalidateDisplayedTimeline;
- (void)invalidatePresentedTimelineTransition;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimelineRect;
- (void)updatePresentedTimelineTransition;
- (void)willUpdate;

@end
