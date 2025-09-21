@class NSString, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_removeAccount:(id)a0;
+ (id)_activeStorefrontIdentifier;
+ (void)_setActiveStorefrontIdentifier:(id)a0;
+ (void)_logDeltasForCookies:(id)a0 oldCookies:(id)a1;
+ (id)_mergeCookiesForAccount:(id)a0 oldAccount:(id)a1;
+ (void)_postAccountsChangedInternalNotification;
+ (void)_postAccountsChangedNotification;
+ (void)_postAccountsChangedNotificationsIfNeededForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2;
+ (void)_postActiveAccountChangedNotification;
+ (void)_postActiveiCloudAccountChangedNotification;
+ (void)_postEligibilityOverrideNotificationIfNeededForAccount:(id)a0 oldAccount:(id)a1;
+ (void)_postStorefontChangedNotificationIfNeededForAccount:(id)a0 oldAccount:(id)a1 store:(id)a2;
+ (void)_postStorefrontChangedNotification;
+ (void)_saveAccount:(id)a0;
+ (char)_shouldProcessChangeForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2;
+ (char)_shouldRemoveModifiedAccount:(id)a0;
+ (char)_shouldSignOutOfModifiedAccount:(id)a0;
+ (id)_stringForAccountChangeType:(int)a0;
+ (void)_updateLocalAccountStorefrontIfNeededForAccount:(id)a0 store:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (char)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (char)canSaveAccount:(id)a0 inStore:(id)a1;
- (char)_canSaveAccount:(id)a0 withOtherAccounts:(id)a1;
- (void)_deactivateAllAccountsExcept:(id)a0 inStore:(id)a1;
- (id)_fetchPersonaIDIfCurrentPersonaIsEnterprise;
- (char)_handleAccountMediaTypeLogicForAccountWillChange:(id)a0;
- (char)_handleCookieLogicForAccountWillChange:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (char)_handleLocalAccountLogicForAccountWillChange:(id)a0;
- (char)_handleMultiUserLogicForAccountWillChange:(id)a0;
- (char)_handlePrivacyAcknowledgementLogicForAccountWillChange:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (char)_handleRemoteDeviceChangeLogicForAccountWillChange:(id)a0 oldAccount:(id)a1;
- (char)_handleSandboxAccountLogicForAccountWillChange:(id)a0 inStore:(id)a1;
- (char)_handleStorefrontLogicForAccountWillChange:(id)a0;
- (char)_handleUserManagementLogicForAccountWillChange:(id)a0 changeType:(int)a1;
- (void)_logDirtyPropertiesForAccount:(id)a0 oldAccount:(id)a1;
- (void)_logoutOfAccount:(id)a0 store:(id)a1;
- (char)_mergeLocalPrivacyAcknowledgementIntoAccount:(id)a0 withStore:(id)a1;
- (void)_processAccountAddition:(id)a0 inStore:(id)a1;
- (void)_processAccountDeletion:(id)a0 inStore:(id)a1;
- (void)_processAccountFlagsForAccount:(id)a0 oldAccount:(id)a1;
- (void)_processAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_processIDMSAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_processPrivacyAcknowledgementForAccount:(id)a0 oldAccount:(id)a1;
- (void)_processiCloudAccountAddition:(id)a0 inStore:(id)a1;
- (void)_processiTunesAccountAddition:(id)a0 inStore:(id)a1;
- (void)_processiTunesAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_resetBiometricsForAccount:(id)a0;
- (void)_resetBundleOwnerState;
- (void)_resetDeviceOffersIfNeeded;
- (void)_resetFollowUpsForAccount:(id)a0;
- (void)_resetMusicSpecificPreferences;
- (void)_resetSpringBoardDefaultPNGSnapshots;
- (void)_resetSubscriptionStatusForAccount:(id)a0;

@end
