@class NSDate, NSString, NSArray, CPLScopeFilter, NSSet, CPLSyncSessionPredictor, NSMutableSet, CPLBackgroundActivity, CPLEngineScheduler, NSMutableArray;
@protocol CPLSyncSessionRescheduler;

@interface CPLSyncSession : NSObject <CPLSyncSessionPredictorObserver, CPLSyncSessionConfiguration> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _watchingPredictor;
    NSMutableSet *_scopeIdentifiersExcludedFromMingling;
    NSMutableArray *_sessionInformation;
    char _hasNotifiedClientOfChangesToPull;
}

@property (class, copy, nonatomic) NSString *scopeIdentifierToAutomaticallyExcludeFromMingling;

@property (readonly, weak, nonatomic) CPLEngineScheduler *scheduler;
@property (readonly, nonatomic) NSDate *expectedDate;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic, getter=isDetached) char detached;
@property (readonly, nonatomic) char shouldBeDiscretionary;
@property (readonly, nonatomic) char shouldDefer;
@property (readonly, nonatomic) long long activityState;
@property (readonly, nonatomic) unsigned long long requiredStateAtEndOfSyncSession;
@property (readonly, nonatomic) char shouldRescheduleASyncSession;
@property (readonly, nonatomic) NSDate *proposedRescheduleDate;
@property (readonly, nonatomic) NSString *whenItWillStartDescription;
@property (retain, nonatomic) id<CPLSyncSessionRescheduler> rescheduler;
@property (retain, nonatomic) CPLBackgroundActivity *detachedActivity;
@property (readonly, nonatomic) CPLSyncSessionPredictor *predictor;
@property (nonatomic) char shouldRequestMoreTime;
@property (nonatomic) char shouldHaveRequestedMoreTime;
@property (nonatomic) char shouldConsiderRequestingMoreTime;
@property (readonly, nonatomic) double estimatedRemainingTime;
@property (readonly, nonatomic) CPLScopeFilter *scopeFilter;
@property (readonly, nonatomic) NSMutableSet *scopeIdentifiersExcludedFromPushToTransport;
@property (readonly, nonatomic) NSSet *scopeIdentifiersExcludedFromMingling;
@property (readonly, nonatomic) char needsToAcquireRescheduler;
@property (readonly) unsigned long long currentState;
@property (readonly, nonatomic) NSArray *currentSessionInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) char allowsLocalConflictResolutionWhenOverQuota;
@property (readonly) char allowsLocalConflictResolution;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property (readonly) char isComputeStateTaskUploadEnabled;
@property (readonly, nonatomic) char shouldCheckEPPCapability;

+ (id)detachedSyncSessionWithScheduler:(id)a0 configuration:(id)a1 scopeFilter:(id)a2;

- (void).cxx_destruct;
- (id)redactedDescription;
- (char)isAfterDate:(id)a0;
- (char)isBeforeDate:(id)a0;
- (void)_watchPredictor;
- (void)deferWithBlock:(id /* block */)a0;
- (void)engineIsClosing;
- (void)_unwatchPredictor;
- (void)_updatePrediction:(id)a0;
- (void)_watchOrUnwatchPredictorIfNecessary;
- (id)addDeferHandler:(id /* block */)a0;
- (void)dropExpectedDate;
- (void)excludeScopeIdentifierFromMingling:(id)a0;
- (void)excludeScopeIdentifierFromPushToTransport:(id)a0;
- (void)includeScopeIdentifierInMingling:(id)a0;
- (void)includeScopeIdentifierInPushToTransport:(id)a0;
- (id)initWithSequenceNumber:(unsigned long long)a0 expectedDate:(id)a1 scheduler:(id)a2 configuration:(id)a3 scopeFilter:(id)a4;
- (char)isInLessThanTimeInterval:(double)a0;
- (char)isInMoreThanTimeInverval:(double)a0;
- (void)noteClientNeedsToPullIfNecessary;
- (void)noteSyncSessionInformation:(id)a0;
- (void)noteSyncSessionInformation:(id)a0 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (void)noteSyncSessionMovedToState:(unsigned long long)a0;
- (id)popSessionInformation;
- (void)predictor:(id)a0 changedPrediction:(id)a1;
- (void)removeDeferHandler:(id)a0;
- (void)requestSyncStateAtEndOfSyncSession:(unsigned long long)a0 reschedule:(char)a1;
- (void)requestSyncStateAtEndOfSyncSession:(unsigned long long)a0 reschedule:(char)a1 proposedRescheduleDate:(id)a2;
- (void)resetNoteClientNeedsToPull;
- (void)sessionIsDone;
- (void)sessionWillStart;
- (void)sessionWontHappen;
- (void)setupWithConfiguration:(id)a0;
- (void)updateScopeFilter:(id)a0;

@end
