@class NSArray, CalPreferences;

@interface EKPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) BOOL refiringReminderAlarmsEnabled;
@property (nonatomic) BOOL useShortReminderSnoozeInterval;
@property (nonatomic) BOOL useShortReminderRefireInterval;
@property (nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property (nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (readonly) BOOL bypassSplashScreen;
@property (nonatomic) BOOL showDeclinedEvents;
@property (nonatomic) BOOL alertInviteeDeclines;
@property (readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncIdentifiers;
@property (retain, nonatomic) NSArray *selectedCalendarIdentifiers;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_setDeselectedCalendarIdentifiers:(id)a0;
- (void)setDeselectedCalendars:(id)a0;
- (void)_setDeselectedCalendarSyncHashes:(id)a0;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)a0;

@end
