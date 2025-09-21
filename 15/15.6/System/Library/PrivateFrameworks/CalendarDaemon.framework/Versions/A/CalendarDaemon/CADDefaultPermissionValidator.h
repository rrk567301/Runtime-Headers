@class ClientIdentity, NSString;
@protocol CADTCCPermissionChecker;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    char _allowedEntityTypesValid;
    long long _eventAuthorization;
    long long _remindersAuthorization;
    struct __SecTask { } *_task;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CADTCCPermissionChecker> _tccPermissionChecker;
}

@property (readonly, weak, nonatomic) ClientIdentity *identity;
@property (readonly) long long eventAuthorization;
@property (readonly) long long remindersAuthorization;
@property (readonly) int eventAccessLevel;
@property (readonly) char hasReminderAccess;
@property (readonly) char isFirstPartyCalendarApp;
@property (readonly) char isCalendarDaemon;
@property (readonly) char isRemoteUIExtension;
@property (readonly) char isCalendarWidgetExtension;
@property (readonly) char isAutomatorApp;
@property (readonly) char isShortcutsApp;
@property (readonly) char canAccessProcedureAlarms;
@property (readonly) char canModifySuggestedEventCalendar;
@property (readonly) char canMakeSpotlightChanges;
@property (readonly) char canModifyBirthdayCalendar;
@property (readonly) char canRequestDiagnostics;
@property (readonly) char canModifyCalendarDatabase;
@property (readonly) char testingAccessLevelGranted;
@property (readonly) char internalAccessLevelGranted;
@property (readonly) char storageManagementAccessGranted;
@property (readonly) char hasSyncClientEntitlement;
@property (readonly) char hasCalendarTCCBypassEntitlement;
@property (readonly) char hasCalendarToolEntitlement;
@property (readonly) char hasChangeIdTrackingOverrideEntitlement;
@property (readonly) char hasNotificationCountEntitlement;
@property (readonly) char hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) char shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) char allowsCustomDatabasePath;
@property (readonly) char allowsIntegrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClientIdentity:(id)a0;
- (id)_valueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
- (void)_loadAccessPermissionsIfNeeded;
- (char)_valueForBooleanEntitlement:(id)a0 defaultValue:(char)a1;
- (char)_valueForStringEntitlement:(id)a0 matchesString:(id)a1;
- (id)initWithClientIdentity:(id)a0 tccPermissionChecker:(id)a1;

@end
