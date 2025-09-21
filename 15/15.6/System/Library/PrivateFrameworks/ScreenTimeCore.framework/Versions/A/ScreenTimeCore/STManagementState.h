@class STPrivateServiceClient, NSXPCConnection;

@interface STManagementState : NSObject

@property char cachedShouldRequestMoreTime;
@property char cachedIsRestrictionsPasscodeSet;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) STPrivateServiceClient *privateServiceClient;
@property (readonly) char contactsEditable;
@property (readonly) char needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) char isRestrictionsPasscodeSet;
@property (readonly, nonatomic) char shouldRequestMoreTime;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)a0;
- (void)contactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)communicationPoliciesWithError:(id *)a0;
- (char)applyDefaultUserPoliciesWithError:(id *)a0;
- (void)applyIntroductionModel:(id)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (char)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)communicationPoliciesForDSID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (char)enableRemoteManagementForDSID:(id)a0 error:(id *)a1;
- (char)enableScreenTimeForDSID:(id)a0 error:(id *)a1;
- (void)enableWebContentFilterWithCompletionHandler:(id /* block */)a0;
- (void)isContentPrivacyEnabledForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (void)isLocationSharingModificationAllowedForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)isRestrictionsPasscodeSet:(id /* block */)a0;
- (void)isWebContentRestricted:(id /* block */)a0;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)lastModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (char)performMigrationFromMCXSettings:(id)a0 error:(id *)a1;
- (char)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (void)postNotificationForContext:(id)a0;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (void)setLocationSharingModificationAllowed:(char)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setManageContactsEnabled:(char)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)setScreenTimeEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (char)setScreenTimeEnabled:(char)a0 error:(id *)a1;
- (void)setScreenTimeSyncingEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (void)shouldRequestMoreTime:(id /* block */)a0;
- (char)triggerDowngradeMigrationWithOutError:(id *)a0;

@end
