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
- (id)predictions;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (void)scheduleNextPredictionUpdate;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (id)predictionsValidNow;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void).cxx_destruct;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)initializeLock;
- (void)forwardPredictionUpdates;
- (id)_readPredictionsFromCache;
- (id)criteriaForJobOnDate:(id)a0;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)init;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (id)_cache;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)clearPredictionsForAnchor:(id)a0;
- (id)deduplicatedPredictions:(id)a0;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (void)scheduleExistingPredictions;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;

@end
