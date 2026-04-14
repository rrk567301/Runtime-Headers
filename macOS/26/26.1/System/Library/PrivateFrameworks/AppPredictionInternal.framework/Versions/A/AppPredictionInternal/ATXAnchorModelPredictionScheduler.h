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

- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (id)_readPredictionsFromCache;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)clearPredictionsForAnchor:(id)a0;
- (id)now;
- (id)criteriaForJobOnDate:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void)scheduleExistingPredictions;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (void)scheduleNextPredictionUpdate;
- (void)forwardPredictionUpdates;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (id)deduplicatedPredictions:(id)a0;
- (id)predictionsValidNow;
- (id)_cache;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)predictions;
- (void).cxx_destruct;
- (void)initializeLock;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (id)init;

@end
