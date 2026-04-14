@class NSUserDefaults, ATXAnchorModelHyperParameters, NSDate, _PASLock;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelPredictionForwarderProtocol;

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
    unsigned long long _maxPredictions;
}

- (id)now;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (void)forwardPredictionUpdates;
- (id)predictionsValidNow;
- (id)predictions;
- (void)clearPredictionsForAnchor:(id)a0;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (id)init;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)deduplicatedPredictions:(id)a0;
- (void)scheduleNextPredictionUpdate;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (id)_readPredictionsFromCache;
- (id)criteriaForJobOnDate:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)initializeLock;
- (void).cxx_destruct;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void)scheduleExistingPredictions;
- (id)_cache;

@end
