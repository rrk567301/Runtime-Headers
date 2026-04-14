@class NSDate, NSString, CPLScopeFilter, NSSet, CPLSyncSessionPredictor, NSMutableSet, NSObject, CPLEngineScheduler, NSMutableArray;
@protocol CPLSyncSessionRescheduler, OS_xpc_object;

@interface CPLSyncSession : NSObject <CPLSyncSessionPredictorObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _watchingPredictor;
    NSMutableSet *_scopeIdentifiersExcludedFromMingling;
    NSMutableArray *_sessionInformation;
}

@property (class, copy, nonatomic) NSString *scopeIdentifierToAutomaticallyExcludeFromMingling;

@property (readonly, weak, nonatomic) CPLEngineScheduler *scheduler;
@property (readonly, nonatomic) NSDate *expectedDate;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) long long activityState;
@property (readonly, nonatomic) unsigned long long requiredStateAtEndOfSyncSession;
@property (readonly, nonatomic) BOOL shouldRescheduleASyncSession;
@property (readonly, nonatomic) BOOL mightNeedForegroundToStart;
@property (readonly, nonatomic) NSString *whenItWillStartDescription;
@property (retain, nonatomic) id<CPLSyncSessionRescheduler> rescheduler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *detachedActivity;
@property (readonly, nonatomic) CPLSyncSessionPredictor *predictor;
@property (readonly, nonatomic) CPLScopeFilter *scopeFilter;
@property (readonly, nonatomic) NSMutableSet *scopeIdentifiersExcludedFromPushToTransport;
@property (readonly, nonatomic) NSSet *scopeIdentifiersExcludedFromMingling;
@property (readonly) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detachedSyncSessionWithScheduler:(id)a0 scopeFilter:(id)a1;

- (id)redactedDescription;
- (void).cxx_destruct;
- (BOOL)isAfterDate:(id)a0;
- (BOOL)isBeforeDate:(id)a0;
- (void)predictor:(id)a0 changedPrediction:(id)a1;
- (id)initWithSequenceNumber:(unsigned long long)a0 expectedDate:(id)a1 scheduler:(id)a2 scopeFilter:(id)a3;
- (void)requestSyncStateAtEndOfSyncSession:(unsigned long long)a0 reschedule:(BOOL)a1;
- (BOOL)isInMoreThanTimeInverval:(double)a0;
- (BOOL)isInLessThanTimeInterval:(double)a0;
- (void)dropExpectedDate;
- (void)sessionWillStart;
- (void)deferWithBlock:(id /* block */)a0;
- (void)sessionIsDone;
- (void)sessionWontHappen;
- (void)engineIsClosing;
- (void)_updatePrediction:(id)a0;
- (void)_watchPredictor;
- (void)_unwatchPredictor;
- (void)_watchOrUnwatchPredictorIfNecessary;
- (void)includeScopeIdentifierInPushToTransport:(id)a0;
- (void)excludeScopeIdentifierFromPushToTransport:(id)a0;
- (void)includeScopeIdentifierInMingling:(id)a0;
- (void)excludeScopeIdentifierFromMingling:(id)a0;
- (void)noteSyncSessionInformation:(id)a0 arguments:(char *)a1;
- (void)noteSyncSessionMovedToState:(unsigned long long)a0;
- (void)noteSyncSessionInformation:(id)a0;
- (id)popSessionInformation;

@end
