@class RTDefaultsManager, RTManagedConfiguration, RTPredictedContextStore, RTVisitConsolidator, NSObject;
@protocol OS_dispatch_queue;

@interface RTPredictedContextMetricsManager : NSObject

@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) RTPredictedContextStore *predictedContextStore;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTVisitConsolidator *visitConsolidator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (float)calculatePredictability:(id)a0 priorVisits:(id)a1 timeWindowHalfWidth:(double)a2;
+ (id)getAllContextsInOneArray:(id)a0;
+ (long long)getFrequentLoiFromCount:(long long)a0;
+ (id)getHighProbabilityPredictedContexts:(id)a0;
+ (id)getPredictedContextLocationFromDictionary:(id)a0;
+ (id)getRequestCountByInferenceTriggerReasonForRequests:(id)a0;
+ (double)getTotalInferenceLatencyForRequests:(id)a0;
+ (double)getTotalMemoryFootprintForRequests:(id)a0;
+ (long long)isCorrectPrediction:(id)a0 forTruthVisits:(id)a1 matchingVisit:(id *)a2;
+ (id)isCorrectTruth:(id)a0 forPredictions:(id)a1;
+ (BOOL)isWithinMidnightBoundary:(id)a0 targetDay:(long long)a1 interval:(double)a2;
+ (id)stringFromPredictedContextMetricsEvent:(unsigned long long)a0;

- (void)onDailyMetricsNotification:(id)a0;
- (void)setup;
- (void)_setup;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)getPredictionsForInterval:(id)a0 completion:(id /* block */)a1;
- (void)getRequestsForInterval:(id)a0 completion:(id /* block */)a1;
- (void)getVisitsForInterval:(id)a0 completion:(id /* block */)a1;
- (id)initWithManagedConfiguration:(id)a0 predictedContextStore:(id)a1 defaultsManager:(id)a2 visitConsolidator:(id)a3;
- (void)prepareAndSubmitDailyInferenceEventMetrics:(id)a0;
- (void)prepareAndSubmitInferenceEventMetrics:(id)a0;
- (void)prepareAndSubmitInferenceLOIMismatchEventMetrics:(id)a0;
- (void)prepareAndSubmitPredictionEventMetrics:(id)a0 yesterdayVisits:(id)a1;
- (void)prepareAndSubmitTrainingEventMetrics:(unsigned long long)a0;
- (void)prepareAndSubmitTruthEventMetrics:(id)a0 yesterdayVisits:(id)a1 yesterdayPredictions:(id)a2;
- (id)prepareDailyInferenceEventMetrics:(id)a0;
- (id)prepareInferenceEventMetric:(id)a0;
- (id)prepareInferenceLOIMismatchEventMetric:(id)a0;
- (id)preparePredictionEventMetric:(id)a0 correctPrediction:(long long)a1 matchingVisit:(id)a2;
- (id)prepareTrainingEventMetric:(unsigned long long)a0;
- (id)prepareTruthEventMetric:(id)a0 predictability:(float)a1 truePositiveCount:(long long)a2 highestProbability:(float)a3 frequentLoi:(long long)a4 leadTime:(float)a5;
- (void)sendInferenceEventDataToPPS:(id)a0;
- (void)sendTrainingEventDataToPPS:(id)a0;
- (void)submitFeatureExtractorMetrics:(id)a0;
- (BOOL)submitMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;

@end
