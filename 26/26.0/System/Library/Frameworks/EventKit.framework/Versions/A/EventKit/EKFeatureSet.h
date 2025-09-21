@interface EKFeatureSet : NSObject

+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isConservativeEntryEnabled;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)areContextualRemindersSupported;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isContinuitySupported;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)areQuickActionsSupported;

@end
