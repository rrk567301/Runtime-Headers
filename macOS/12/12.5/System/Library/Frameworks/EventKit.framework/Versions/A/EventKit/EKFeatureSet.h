@interface EKFeatureSet : NSObject

+ (BOOL)automaticGeocodingEnabled;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)eventsFoundInAppsEnabled;

@end
