@class NSString, CalPreferences;

@interface EKDebugPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) char overrideTravelAdvisoryHypothesis;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) char overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) char preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) char forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) char saveGeocodedLocationsInTravelEngine;
@property (nonatomic) char performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) char verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property (nonatomic) char showDepartureDateForTransitTimeToLeave;
@property (nonatomic) char shouldBypassTravelEngineThrottle;
@property (nonatomic) char syntheticTravelAdvisoriesEnabled;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
