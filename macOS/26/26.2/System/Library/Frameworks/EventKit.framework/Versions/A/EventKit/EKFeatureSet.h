@interface EKFeatureSet : NSObject

+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)isContinuitySupported;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)areContextualRemindersSupported;

@end
