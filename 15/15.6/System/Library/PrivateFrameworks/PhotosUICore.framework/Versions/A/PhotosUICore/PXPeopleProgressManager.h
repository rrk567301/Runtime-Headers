@class NSTimer, PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject

@property (nonatomic) double progress;
@property (retain, nonatomic) NSTimer *statusTimer;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressLock;
@property (nonatomic) long long mockSubstantialProcessingCount;
@property (readonly, nonatomic) PXPeopleProgressDataSource *dataSource;
@property (nonatomic) char monitoringProgress;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) char featureUnlocked;
@property (readonly, nonatomic) char shouldUseInterstitial;
@property (nonatomic) long long processingStatus;

+ (id)_progressFooterQueue;
+ (char)hasSubstantialProcessingRemainingForThreshold:(long long)a0 pendingAssetCount:(long long)a1 allowedAssetCount:(long long)a2 photoLibrary:(id)a3;
+ (char)isFaceProcessingFinishedForPhotoLibrary:(id)a0;
+ (char)progressComplete:(double)a0;
+ (void)shouldCheckProcessedCounts:(char *)a0 hasSubstantialProcessingRemaining:(char *)a1 threshold:(long long)a2 featureUnlocked:(char)a3;
+ (char)shouldCheckProcessedCountsForThreshold:(long long)a0;
+ (id)statusStringForStatus:(long long)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_handleAsyncUpdateIsReadyForAnalysis:(char)a0 processedToAnyVersionProgress:(long long)a1 processedToAnyVersionCount:(long long)a2;
- (char)_hasSubstantialProcessingRemainingForThreshold:(long long)a0 allowMocking:(char)a1;
- (void)_logFaceCounts;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForIsReadyForAnalysis:(char)a0 progress:(double)a1 processCount:(long long)a2;
- (char)debug_ignoreMockingHasSubstantialProcessingRemainingForThreshold:(long long)a0;
- (char)hasSubstantialProcessingRemainingForThreshold:(long long)a0;
- (void)shouldUseProgressFooterWithCompletion:(id /* block */)a0;
- (void)updateProgressWithForce:(char)a0;

@end
