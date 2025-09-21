@class NSXPCConnection;

@interface STPrivateServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)forceFamilyFetchWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllWebHistoryForApplication:(id)a0 profileIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateAllowFindMyFriendsModification:(char)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)setScreenTimeSyncEnabled:(char)a0 error:(id *)a1;
- (char)shouldRequestMoreTimeWithError:(id *)a0;
- (void)applyDefaultUserPoliciesWithError:(id *)a0;
- (void)applyIntroductionModel:(id)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (char)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (char)contactsEditable;
- (void)deleteAllWebHistoryForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableRemoteManagementForDSID:(id)a0 error:(id *)a1;
- (void)fetchContactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastModificationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)isAllowFindMyFriendsModificationSetForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (char)isContentPrivacyEnabledForDSID:(id)a0 error:(id *)a1;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (char)isRestrictionsPasscodeSetWithError:(id *)a0;
- (id)isScreenTimeEnabledForLocalUserWithError:(id *)a0;
- (char)isScreenTimeEnabledForRemoteUserWithDSID:(id)a0 error:(id *)a1;
- (void)isScreenTimeSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (char)isScreenTimeSyncEnabledWithError:(id *)a0;
- (void)lastCommunicationLimitsModificationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (char)needsToSetRestrictionsPasscodeWithError:(id *)a0;
- (char)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (void)setManageContactsEnabled:(char)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)setScreenTimeEnabledForLocalUser:(char)a0 error:(id *)a1;
- (void)setScreenTimeEnabledForRemoteUserWithDSID:(id)a0 enabled:(char)a1 error:(id *)a2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)a0;

@end
