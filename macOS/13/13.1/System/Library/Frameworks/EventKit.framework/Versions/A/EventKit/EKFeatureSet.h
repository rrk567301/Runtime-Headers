@interface EKFeatureSet : NSObject

+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)eventsFoundInAppsEnabled;

@end
