@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)locationOfInterestSearchRadius;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (int)predictedExitTimesUpdateInterval;
- (int)locationOfInterestUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (void).cxx_destruct;
- (int)workLOISearchRadius;
- (int)previousLOIExpirationTime;
- (int)homeLOISearchRadius;
- (id)initWithAssetClass:(Class)a0;
- (id)init;
- (BOOL)isSetupSuggestionsForFocusEnabled;

@end
