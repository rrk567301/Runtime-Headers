@class NSString;
@protocol CADPermissionValidator;

@interface CADCombinedPermissionValidator : NSObject <CADPermissionValidator> {
    id<CADPermissionValidator> _validator1;
    id<CADPermissionValidator> _validator2;
}

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

- (void).cxx_destruct;
- (id)initWithPermissionValidator:(id)a0 andValidator:(id)a1;

@end
