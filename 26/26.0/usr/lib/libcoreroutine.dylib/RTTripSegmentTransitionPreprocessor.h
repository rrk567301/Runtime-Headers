@class RTVehicleStore, RTDefaultsManager, NSMutableDictionary, RTVisitManager, RTMotionActivityManager, RTLocationManager, RTLearnedLocationManager, RTDistanceCalculator, NSMutableArray, RTElevationAdjuster;

@interface RTTripSegmentTransitionPreprocessor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *transitionStartStopLocations;
@property (retain, nonatomic) NSMutableArray *tripSegmentTransitions;
@property (retain, nonatomic) NSMutableArray *tripSegmentVisitStatus;
@property (retain, nonatomic) NSMutableArray *tripSegmentTransitionStatus;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (readonly, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTElevationAdjuster *elevationAdjuster;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableArray *compoundedVisitIntervals;

- (void).cxx_destruct;
- (id)applyRule_VisitsPredominantlyDrivingAreInvalid_ForVisitAtIndex:(id)a0;
- (void)_addCompoundedVisitInterval:(id)a0;
- (BOOL)_areTwoVisitsSame:(id)a0 firstVisitLocation:(id)a1 secondLearnedLOI:(id)a2 secondVisitLocation:(id)a3;
- (long long)_isVisitCompoundingLeadingToLoopbackTransition:(long long)a0 currentVisitStatus:(id)a1;
- (int)_visitCompoundingLoopbackCheckDurationSec;
- (unsigned long long)_visitCompoundingShortVisitDurationSec;
- (void)adjustTransitionEndpoints;
- (void)appendTransitionToCurrentVisit;
- (BOOL)applyElevationAdjustmentToLoiLocations;
- (id)applyRule_LoiVisitsAreValid_ForVisitAtIndex:(id)a0;
- (id)applyRule_LongVisitsAreValid_ForVisitAtIndex:(id)a0;
- (id)applyRule_ShortVisitsAreInvalid_ForVisitAtIndex:(id)a0;
- (id)applyRule_VehicleConnectionCannotSpanVisits_ForVisitAtIndex:(id)a0;
- (id)applyRule_highAverageSpeedTransitionsAreInvalid_ForTransitionAtIndex:(id)a0;
- (id)applyRule_largeDistanceTransitionsAreInvalid_ForTransitionAtIndex:(id)a0;
- (id)applyRule_longTransitionsAreInvalid_ForTransitionAtIndex:(id)a0;
- (id)applyRule_shortTransitionsAreInvalid_ForTransitionAtIndex:(id)a0;
- (BOOL)createContrivedTransitionToCurrentVisit;
- (id)estimateExitTimestampAtOrigin:(id)a0 startLoiLocation:(id)a1 startBreadcrumbDistance:(double)a2 error:(id *)a3;
- (id)fetchEndpointCLLocationForTransition:(id)a0 atOrigin:(BOOL)a1;
- (id)fetchLearnedLocationOfInterestForVisitIdentifier:(id)a0 outLearnedVisitLocation:(id *)a1;
- (id)fetchLearnedLocationOfInterestWithinDistance:(double)a0 location:(id)a1;
- (unsigned long long)getLocationLookbackSeconds;
- (id)initWithMotionActivityManager:(id)a0 locationManager:(id)a1 learnedLocationManager:(id)a2 vehicleStore:(id)a3 distanceCalculator:(id)a4 visitManager:(id)a5 elevationAdjuster:(id)a6 defaultsManager:(id)a7;
- (BOOL)isVisitCompoundingEnabled;
- (unsigned long long)maxAdjacentVisitsToCompound;
- (id)mergeTransition:(id)a0 withSecond:(id)a1;
- (id)processTransitions:(id)a0;
- (void)tryCompoundingVisits;
- (void)tryDeleteTransitions;
- (void)tryMergeTransitions;

@end
