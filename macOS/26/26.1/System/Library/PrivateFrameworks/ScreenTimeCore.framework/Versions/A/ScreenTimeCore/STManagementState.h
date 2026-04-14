@class NSXPCConnection;

@interface STManagementState : NSObject

@property BOOL cachedShouldRequestMoreTime;
@property BOOL cachedIsRestrictionsPasscodeSet;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) BOOL contactsEditable;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
@property (readonly, nonatomic) BOOL shouldRequestMoreTime;
@property (readonly, nonatomic) BOOL isLocalUserManaged;

- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)isLocationSharingModificationAllowedForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)isContentPrivacyEnabledForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)postNotificationForContext:(id)a0;
- (void)setRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (void)isLocalUserManagedWithCompletionHandler:(id /* block */)a0;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)a0;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (BOOL)performMigrationFromMCXSettings:(id)a0 error:(id *)a1;
- (BOOL)triggerDowngradeMigrationWithOutError:(id *)a0;
- (void)isWebContentRestricted:(id /* block */)a0;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadRegionRatingsDataForStorefront:(id)a0 includeUnrated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)setLocationSharingModificationAllowed:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (id)restrictionsForUserDSID:(id)a0 error:(id *)a1;
- (BOOL)setScreenTimeEnabled:(BOOL)a0 error:(id *)a1;
- (void)enableWebContentFilterWithCompletionHandler:(id /* block */)a0;
- (void)applyIntroductionModel:(id)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)contactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)applyDefaultUserPoliciesWithError:(id *)a0;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (void)lastModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)exportDatabaseToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)managingGuardianAppleIDsForLocalUserWithError:(id *)a0;
- (BOOL)enableScreenTimeForDSID:(id)a0 error:(id *)a1;
- (void)communicationPoliciesForDSID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)isRestrictionsPasscodeSet:(id /* block */)a0;
- (BOOL)enableRemoteManagementForDSID:(id)a0 error:(id *)a1;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)isCommunicationSafetyEnabledForUserDSID:(id)a0 error:(id *)a1;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (void)managingGuardianAppleIDsForLocalUserWithCompletionHandler:(id /* block */)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)shouldRequestMoreTime:(id /* block */)a0;
- (id)init;

@end
