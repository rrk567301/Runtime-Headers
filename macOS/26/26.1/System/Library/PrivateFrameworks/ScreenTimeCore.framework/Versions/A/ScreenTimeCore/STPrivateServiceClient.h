@class NSXPCConnection;

@interface STPrivateServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)setRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)applyIntroductionModel:(id)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)applyDefaultUserPoliciesWithError:(id *)a0;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (BOOL)contactsEditable;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)enableRemoteManagementForDSID:(id)a0 error:(id *)a1;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)forceFamilyFetchWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllWebHistoryForApplication:(id)a0 profileIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)setScreenTimeSyncEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)shouldRequestMoreTimeWithError:(id *)a0;
- (void)updateAllowFindMyFriendsModification:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteAllWebHistoryForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchContactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastModificationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)isAllowFindMyFriendsModificationSetForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isContentPrivacyEnabledForDSID:(id)a0 error:(id *)a1;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (BOOL)isRestrictionsPasscodeSetWithError:(id *)a0;
- (id)isScreenTimeEnabledForLocalUserWithError:(id *)a0;
- (BOOL)isScreenTimeEnabledForRemoteUserWithDSID:(id)a0 error:(id *)a1;
- (void)isScreenTimeSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (BOOL)isScreenTimeSyncEnabledWithError:(id *)a0;
- (void)lastCommunicationLimitsModificationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)needsToSetRestrictionsPasscodeWithError:(id *)a0;
- (void)setScreenTimeEnabledForLocalUser:(BOOL)a0 error:(id *)a1;
- (void)setScreenTimeEnabledForRemoteUserWithDSID:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)a0;

@end
