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

- (BOOL)_isDateRelevantContextSatisfied:(id)a0;
- (BOOL)_isBehavioralRelevanceSatisfiedForCandidate:(id)a0 currentMode:(unsigned long long)a1;
- (void)_queue_startMonitoringModeChanges;
- (void)_coalescedRefreshCurrentlyRelevantCandidates;
- (id)_earliestFutureDateAmongDateRelevantContexts:(id)a0;
- (void)_queue_startMonitoringDateRelevantContexts:(id)a0;
- (void).cxx_destruct;
- (void)_queue_refreshCurrentlyRelevantCandidates;
- (void)_queue_clearAllCurrentMonitoring;
- (id)init;
- (void)resetToMonitorForRelevantShortcutCandidates:(id)a0;
- (id)_nonnullEndDateOfDateRelevantContext:(id)a0;

@end
