@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)predictedExitTimesUpdateInterval;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (id)initWithAssetClass:(Class)a0;
- (int)previousLOIExpirationTime;
- (int)homeLOISearchRadius;
- (id)init;
- (int)workLOISearchRadius;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (void).cxx_destruct;

@end
