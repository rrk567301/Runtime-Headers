@class PXStoryModel, NSString, NSError, PXStoryResourcesPreloader;

@interface PXStoryResourcesPreloadingController : PXStoryController <PXStoryResourcesPreloadingCoordinatable> {
    PXStoryResourcesPreloader *_preloader;
}

@property (nonatomic) char canStartPreloading;
@property (nonatomic) long long bufferingEvents;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char isSongResourcesPreloadingEnabled;
@property (readonly, nonatomic) char shouldSkipInitialSegment;
@property (readonly, nonatomic) float loadingFractionComplete;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) char isCompleted;
@property (readonly, nonatomic) unsigned long long isCompletedChangeDescriptor;
@property (nonatomic) char isPreloadingEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)setIsActive:(char)a0;
- (void)setIsCompleted:(char)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateCanStartPreloading;
- (void)_invalidateCurrentPlaybackTimeOnPreloader;
- (void)_invalidateCurrentSegmentIdentifierOnPreloader;
- (void)_invalidatePreloadingRequest;
- (void)_invalidateReadinessStatus;
- (void)_updateCanStartPreloading;
- (void)_updateCurrentPlaybackTimeOnPreloader;
- (void)_updateCurrentSegmentIdentifierOnPreloader;
- (void)_updatePreloadingRequest;
- (void)_updateReadinessStatus;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithModel:(id)a0 mediaProvider:(id)a1;
- (id)initWithObservableModel:(id)a0;
- (void)setIsSongResourcesPreloadingEnabled:(char)a0;
- (void)setLoadingFractionComplete:(float)a0;
- (void)setShouldSkipInitialSegment:(char)a0;

@end
