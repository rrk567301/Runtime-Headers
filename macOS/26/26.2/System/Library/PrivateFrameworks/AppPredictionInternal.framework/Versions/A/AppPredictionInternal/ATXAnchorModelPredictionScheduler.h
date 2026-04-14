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

- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (id)now;
- (id)predictions;
- (id)_readPredictionsFromCache;
- (id)deduplicatedPredictions:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)scheduleNextPredictionUpdate;
- (id)predictionsValidNow;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void).cxx_destruct;
- (id)_cache;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void)scheduleExistingPredictions;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (void)initializeLock;
- (id)dateOfSoonestUpcomingPredictionChange;
- (void)clearPredictionsForAnchor:(id)a0;
- (void)forwardPredictionUpdates;
- (id)init;
- (id)criteriaForJobOnDate:(id)a0;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;

@end
