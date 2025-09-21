@class RTPlatform, NSMutableDictionary, RTDefaultsManager, RTBluePOIMetricManager, RTDistanceCalculator, RTLocalBluePOIResult;

@interface RTBluePOIAggregator : NSObject

@property (retain, nonatomic) NSMutableDictionary *maximumSingleShotConfidenceSeen;
@property (readonly, nonatomic) RTBluePOIMetricManager *bluePOIMetricManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTLocalBluePOIResult *currentPOIEstimate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSinglePOI:(id)a0;
- (void)collectMetricsWithPreaggregatedResult:(id)a0 cachedResult:(id)a1 aggregatedResult:(id)a2 distance:(double)a3 timeDifference:(double)a4;
- (id)initWithBluePOIMetricManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 platform:(id)a3;
- (id)updateAndFetchAggregatedPOIEstimateWithLocalBluePOIResult:(id)a0 collectMetrics:(BOOL)a1 error:(id *)a2;

@end
