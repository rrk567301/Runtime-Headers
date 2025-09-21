@interface EKFeatureSet : NSObject

+ (char)areContextualRemindersSupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (char)areApplicationBadgesSupported;
+ (char)areQuickActionsSupported;
+ (char)areVehicleTriggersEnabled;
+ (char)automaticGeocodingEnabled;
+ (char)eventsFoundInAppsEnabled;
+ (char)isConservativeEntryEnabled;
+ (char)isContinuitySupported;
+ (char)isSuggestionsEnabled;
+ (char)isTravelAdvisorySupported;
+ (char)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;

@end
