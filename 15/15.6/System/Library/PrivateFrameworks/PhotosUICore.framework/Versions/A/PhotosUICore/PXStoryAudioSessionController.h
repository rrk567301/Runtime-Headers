@class PXStoryModel, AVAudioSession, NSObject;
@protocol OS_dispatch_queue, PXAVResourceReclamationController;

@interface PXStoryAudioSessionController : PXStoryController <PXAVResourceReclamationObserver>

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<PXAVResourceReclamationController> resourceReclamationController;
@property (readonly, nonatomic) char shouldMixWithOthers;
@property (readonly, weak, nonatomic) PXStoryModel *model;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)_updateAudioSession;
- (void)resourceReclamationEventDidOccur:(id)a0;
- (void)_invalidateAudioSession;
- (void)_invalidateShouldMixWithOthers;
- (void)_storyQueue_discardExistingAudioSession;
- (void)_updateShouldMixWithOthers;
- (void)_workQueue_createAudioSession;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)setShouldMixWithOthers:(char)a0;

@end
