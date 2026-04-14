@class NSArray, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXRSRelevanceMonitorDelegate;

@interface ATXRSRelevanceMonitor : NSObject {
    NSArray *_queue_candidates;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshCurrentlyRelevantCandidatesOperation;
    BMBiomeScheduler *_computedModeScheduler;
    BPSSink *_computedModeSink;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeSink;
}

@property (weak, nonatomic) id<ATXRSRelevanceMonitorDelegate> delegate;

- (BOOL)_isBehavioralRelevanceSatisfiedForCandidate:(id)a0 currentMode:(unsigned long long)a1;
- (id)_earliestFutureDateAmongDateRelevantContexts:(id)a0;
- (void)_queue_startMonitoringDateRelevantContexts:(id)a0;
- (void)_coalescedRefreshCurrentlyRelevantCandidates;
- (BOOL)_isDateRelevantContextSatisfied:(id)a0;
- (void)_queue_clearAllCurrentMonitoring;
- (void).cxx_destruct;
- (id)_nonnullEndDateOfDateRelevantContext:(id)a0;
- (void)_queue_startMonitoringModeChanges;
- (void)_queue_refreshCurrentlyRelevantCandidates;
- (id)init;
- (void)resetToMonitorForRelevantShortcutCandidates:(id)a0;

@end
