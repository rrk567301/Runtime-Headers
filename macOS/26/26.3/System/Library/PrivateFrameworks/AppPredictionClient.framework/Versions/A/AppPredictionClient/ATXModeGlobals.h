@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)locationOfInterestUpdateInterval;
- (int)workLOISearchRadius;
- (int)homeLOISearchRadius;
- (id)init;
- (int)predictedExitTimesUpdateInterval;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (void).cxx_destruct;
- (int)locationOfInterestSearchRadius;
- (int)currentLocationUpdateInterval;
- (id)initWithAssetClass:(Class)a0;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)frequentLOIMinimumVisits;

@end
