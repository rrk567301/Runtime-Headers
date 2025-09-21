@interface PCConstraintsWeightingUtils : NSObject

+ (id)convertMergeResultToTransition:(id)a0;
+ (void)_addConstraintSourceToBin:(id)a0 loiId:(id)a1;
+ (id)_aggregateMergeResults:(id)a0;
+ (id)_allLOIFromBins:(id)a0;
+ (void)_calculateRasterizationWindowWithVisits:(id)a0 transitions:(id)a1 currentTimeInSec:(double)a2 windowInHours:(double)a3 windowStartOut:(double *)a4 windowEndOut:(double *)a5;
+ (id)_currentContextPredictionFromMergeResults:(id)a0 currentLoiIdentifier:(id)a1 currentTime:(double)a2;
+ (void)_distributeProbabilityToBins:(id)a0 loiId:(id)a1 fullProb:(double)a2 effectiveStart:(double)a3 rampUpEnd:(double)a4 rampDownStart:(double)a5 effectiveEnd:(double)a6 sources:(id)a7 transports:(id)a8;
+ (id)_earliestSignificantMergeResultAfterTime:(double)a0 excludingLoiId:(id)a1 inMergeResults:(id)a2 confidenceThreshold:(double)a3;
+ (double)_estimatedTransitionDurationFromTransitions:(id)a0 originVisitId:(id)a1 destinationVisitId:(id)a2;
+ (double)_estimatedTransitionDurationInSecondsForDistance:(double)a0 drivingProbability:(double *)a1;
+ (id)_estimatedTransportsFromTransitions:(id)a0 originVisitId:(id)a1 destinationVisitId:(id)a2;
+ (void)_finalizeMergeResults:(id)a0 currentTime:(double)a1 windowEndTime:(double)a2 currentContext:(id)a3 currentExitTime:(double)a4 currentExitUnc:(double)a5;
+ (void)_insertTransitionPredictionWithNextResult:(id)a0 currentExitTime:(double)a1 currentExitUnc:(double)a2 transitionInfo:(id)a3 mergeResults:(id)a4;
+ (BOOL)_isGeneratedCurrentContext:(id)a0;
+ (void)_logMergeResults:(id)a0 withDescription:(id)a1;
+ (double)_minimumStayAtCurrentContextInSec;
+ (id)_movingAverageForSeries:(id)a0 windowSize:(long long)a1 loiIdForPadding:(id)a2 currentContextId:(id)a3 bins:(id)a4;
+ (id)_predictedTransitionInfoFromHistoricalTransitions:(id)a0 originVisitId:(id)a1 destinationVisitId:(id)a2;
+ (id)_probabilitySeriesFromBins:(id)a0 loiId:(id)a1;
+ (void)_removeExistingTransitionPredictionsFromMergeResults:(id)a0 beforeMergeResult:(id)a1;
+ (id)_transitionEstimationInfoWithNextResult:(id)a0 currentLoiIdentifier:(id)a1 transitionHistory:(id)a2 loiToLocation:(id)a3;
+ (void)_trimResults:(id)a0 currentTime:(double)a1 windowEndTime:(double)a2;
+ (void)_updateBins:(id)a0 withFilteredSeries:(id)a1 loiId:(id)a2;
+ (void)_updateExitTimeAndUncertaintyOfCurrentContextWithNextResult:(id)a0 currentTime:(double)a1 defaultDurationAtCurrentContext:(double)a2 transitionDuration:(double)a3 inOutExitTime:(double *)a4 inOutExitUnc:(double *)a5 isGeneratedCurrentContext:(BOOL)a6;
+ (id)adaptMergedClusters:(id)a0 bins:(id)a1 loiToColMap:(id)a2;
+ (id)applyMovingAverage:(id)a0 windowSize:(long long)a1 currentContextId:(id)a2;
+ (id)convertBinsToPredSample:(id)a0 loiToColMap:(id)a1;
+ (id)convertMergeResultToLocation:(id)a0 withLocationMap:(id)a1;
+ (id)deduplicateSources:(id)a0;
+ (id)loiIdOfCurrentContextFromVisitHistory:(id)a0 transitionHistory:(id)a1 currentTime:(double)a2;
+ (id)mapLOIToLocationsFromPredictedVisits:(id)a0 currentLoiIdentifier:(id)a1 visitHistory:(id)a2;
+ (id)mergeTransportArrays:(id)a0;
+ (id)normalizeBins:(id)a0;
+ (void)postprocessMergeResults:(id)a0 currentLoiIdentifier:(id)a1 currentTime:(double)a2 windowEndTime:(double)a3 transitionHistory:(id)a4 loiToLocation:(id)a5;
+ (id)rasterizeCandidateVisitPredictions:(id)a0 transitPredictions:(id)a1 currentTimeInSec:(double)a2 windowInHours:(double)a3 binSizeMin:(double)a4;
+ (id)transitionDummyLOI;
+ (void)validateCandidateTransitions:(id)a0 validTransitions:(id)a1 invalidTransitions:(id)a2;
+ (void)validateCandidateVisits:(id)a0 validVisits:(id)a1 invalidVisits:(id)a2;

@end
