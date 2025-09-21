@class NSString, NSNumber, CalPreferences;

@interface CDBPreferences : NSObject

@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) char enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) char has_enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) char suggestEventLocations;
@property (readonly) char has_suggestEventLocations;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) char sqlProfileLoggingEnabled;
@property (readonly) char has_sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) char suggestedLocationsTestMode;
@property (readonly) char has_suggestedLocationsTestMode;
@property (nonatomic, getter=get_overrideParticipantRoleConstraint, setter=set_overrideParticipantRoleConstraint:) char overrideParticipantRoleConstraint;
@property (readonly) char has_overrideParticipantRoleConstraint;
@property (nonatomic, getter=get_allowUnlimitedMigrationAttempts, setter=set_allowUnlimitedMigrationAttempts:) char allowUnlimitedMigrationAttempts;
@property (readonly) char has_allowUnlimitedMigrationAttempts;
@property (nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property (readonly) char has_kCalPreferredDaysToSyncKey;
@property (nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property (readonly) char has_kCalRemindersPreferredDaysToSyncKey;
@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property (readonly) char has_LastConfirmedSplashScreenVersionViewed;
@property (nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) long long privacyPaneHasBeenAcknowledgedVersion;
@property (readonly) char has_privacyPaneHasBeenAcknowledgedVersion;
@property (nonatomic, getter=get_defaultCalendarStoreUID, setter=set_defaultCalendarStoreUID:) long long defaultCalendarStoreUID;
@property (readonly) char has_defaultCalendarStoreUID;
@property (nonatomic, getter=get_defaultCalendarDatabaseID, setter=set_defaultCalendarDatabaseID:) long long defaultCalendarDatabaseID;
@property (readonly) char has_defaultCalendarDatabaseID;
@property (nonatomic, getter=get_defaultCalendarChangedTimestamp, setter=set_defaultCalendarChangedTimestamp:) long long defaultCalendarChangedTimestamp;
@property (readonly) char has_defaultCalendarChangedTimestamp;
@property (nonatomic, getter=get_migrationAttempts, setter=set_migrationAttempts:) long long migrationAttempts;
@property (readonly) char has_migrationAttempts;
@property (copy, nonatomic, getter=get_defaultCalendarID, setter=set_defaultCalendarID:) NSString *defaultCalendarID;
@property (readonly) char has_defaultCalendarID;
@property (copy, nonatomic, getter=get_defaultCalendarChangedReason, setter=set_defaultCalendarChangedReason:) NSString *defaultCalendarChangedReason;
@property (readonly) char has_defaultCalendarChangedReason;
@property (copy, nonatomic, getter=get_DefaultTimedAlarmOffset, setter=set_DefaultTimedAlarmOffset:) NSNumber *DefaultTimedAlarmOffset;
@property (readonly) char has_DefaultTimedAlarmOffset;
@property (copy, nonatomic, getter=get_DefaultAllDayAlarmOffset, setter=set_DefaultAllDayAlarmOffset:) NSNumber *DefaultAllDayAlarmOffset;
@property (readonly) char has_DefaultAllDayAlarmOffset;
@property (readonly, nonatomic) CalPreferences *preferences;

+ (id)shared;
+ (id)sharedReadWrite;
+ (id)preferencesForDirectory:(id)a0;
+ (id)sharedReadOnly;

- (void).cxx_destruct;
- (id)initWithPreferences:(id)a0;
- (id)initWithReadOnly:(char)a0;

@end
