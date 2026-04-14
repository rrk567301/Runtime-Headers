@interface EKFeatureSet : NSObject

+ (void)userAcknowledgedSplashScreen;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)isContinuitySupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isSuggestionsEnabled;

@end
