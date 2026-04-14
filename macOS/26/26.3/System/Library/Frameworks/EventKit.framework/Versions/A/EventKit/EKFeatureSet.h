@interface EKFeatureSet : NSObject

+ (BOOL)automaticGeocodingEnabled;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)areContextualRemindersSupported;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isConservativeEntryEnabled;

@end
