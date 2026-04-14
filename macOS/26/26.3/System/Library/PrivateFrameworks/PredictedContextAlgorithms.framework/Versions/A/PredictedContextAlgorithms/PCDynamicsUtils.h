@interface PCDynamicsUtils : NSObject

+ (id)filterValidLocationPredictions:(id)a0;
+ (double)adjustedScaleFactorWithOriginalScaleFactor:(double)a0 timeUntilEntrySeconds:(double)a1;
+ (id)buildLoiCoordinateMapFromCandidateDataMap:(id)a0;
+ (id)candidateDataMapFromVisits:(id)a0;
+ (id)computeProgressScaleFromCandidateDataMap:(id)a0 lastVisit:(id)a1 currentLocation:(id)a2;
+ (id)computeProgressScaleWithLOIs:(id)a0 lastVisit:(id)a1 currentLocation:(id)a2;
+ (id)computeTravelFeasibilityForCandidateDataMap:(id)a0 currentLocation:(id)a1 currentTime:(double)a2;
+ (id)currentLocationWithLocationHistory:(id)a0 currentTime:(double)a1;
+ (double)directionFactorFromCosineSimilarity:(double)a0;
+ (double)lateralDeviationToWeightWithLateralRatio:(double)a0 minWeight:(double)a1 penaltyStep:(double)a2 graceZoneRatio:(double)a3 gamma:(double)a4;
+ (id)locationOfLastVisitWithVisitHistory:(id)a0 currentTime:(double)a1 isInTransition:(BOOL *)a2 exitTime:(double *)a3;
+ (id)neutralScaleFactorsForDataMap:(id)a0;
+ (double)progressToWeightWithProgressRatio:(double)a0 minWeight:(double)a1 penaltyStep:(double)a2 graceZone:(double)a3 gamma:(double)a4;
+ (double)smoothPenaltyForETAGrowth:(double)a0 graceRatio:(double)a1 penaltyRange:(double)a2 minScaleFactor:(double)a3;
+ (void)updateProbabilitiesForCandidateVisits:(id)a0 withCandidateDataMap:(id)a1 progressScaleByVisitMap:(id)a2 feasibilityByVisitMap:(id)a3 dirctionScaleByVisitMap:(id)a4 etaScaleByVisitMap:(id)a5 currentTime:(double)a6;
+ (void)updateProbabilityForCandidateVisit:(id)a0 withCandidateDataMap:(id)a1 progressScaleByVisitMap:(id)a2 feasibilityByVisitMap:(id)a3 dirctionScaleByVisitMap:(id)a4 etaScaleByVisitMap:(id)a5 currentTime:(double)a6;

@end
