@interface EKFeatureSet : NSObject

+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)areContextualRemindersSupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)isContinuitySupported;

@end
