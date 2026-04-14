@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)initWithAssetClass:(Class)a0;
- (int)homeLOISearchRadius;
- (int)currentLocationUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)locationOfInterestUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (void).cxx_destruct;
- (int)workLOISearchRadius;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)previousLOIExpirationTime;
- (int)locationOfInterestSearchRadius;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (id)init;

@end
