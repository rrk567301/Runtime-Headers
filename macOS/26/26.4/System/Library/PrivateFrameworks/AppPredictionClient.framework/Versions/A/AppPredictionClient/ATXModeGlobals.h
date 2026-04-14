@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (int)previousLOIExpirationTime;
- (id)initWithAssetClass:(Class)a0;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)workLOISearchRadius;
- (void).cxx_destruct;
- (id)init;
- (int)homeLOISearchRadius;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;

@end
