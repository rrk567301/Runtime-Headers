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
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void)forwardPredictionUpdates;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)deduplicatedPredictions:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (id)_cache;
- (void)initializeLock;
- (id)init;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (void)scheduleExistingPredictions;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (id)predictionsValidNow;
- (void)scheduleNextPredictionUpdate;
- (id)predictions;
- (id)_readPredictionsFromCache;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (void)clearPredictionsForAnchor:(id)a0;
- (id)dateOfSoonestUpcomingPredictionChange;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (id)criteriaForJobOnDate:(id)a0;

@end
