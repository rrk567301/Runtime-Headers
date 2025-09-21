@class NSString;

@interface CADMockPermissionValidator : NSObject <CADPermissionValidator, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long eventAuthorization;
@property (nonatomic) long long remindersAuthorization;
@property (nonatomic) int eventAccessLevel;
@property (nonatomic) char hasReminderAccess;
@property (nonatomic) char isFirstPartyCalendarApp;
@property (nonatomic) char isCalendarDaemon;
@property (nonatomic) char isRemoteUIExtension;
@property (nonatomic) char isCalendarWidgetExtension;
@property (nonatomic) char isAutomatorApp;
@property (nonatomic) char isShortcutsApp;
@property (nonatomic) char canAccessProcedureAlarms;
@property (nonatomic) char canModifySuggestedEventCalendar;
@property (nonatomic) char canMakeSpotlightChanges;
@property (nonatomic) char canModifyBirthdayCalendar;
@property (nonatomic) char canRequestDiagnostics;
@property (nonatomic) char canModifyCalendarDatabase;
@property (nonatomic) char testingAccessLevelGranted;
@property (nonatomic) char internalAccessLevelGranted;
@property (nonatomic) char storageManagementAccessGranted;
@property (nonatomic) char hasSyncClientEntitlement;
@property (nonatomic) char hasCalendarToolEntitlement;
@property (nonatomic) char hasChangeIdTrackingOverrideEntitlement;
@property (nonatomic) char hasNotificationCountEntitlement;
@property (nonatomic) char hasManagedConfigurationBundleIDOverrideEntitlement;
@property (nonatomic) char shouldTrustClientEnforcedManagedConfigurationAccess;
@property (nonatomic) char allowsCustomDatabasePath;
@property (nonatomic) char allowsIntegrations;
@property (nonatomic) char hasCalendarTCCBypassEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
