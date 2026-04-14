@class NSXPCConnection;

@interface STManagementState : NSObject

@property BOOL cachedShouldRequestMoreTime;
@property BOOL cachedIsRestrictionsPasscodeSet;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) BOOL contactsEditable;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
@property (readonly, nonatomic) BOOL shouldRequestMoreTime;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)a0;
- (void)contactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)communicationPoliciesForDSID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)shouldRequestMoreTime:(id /* block */)a0;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)isRestrictionsPasscodeSet:(id /* block */)a0;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (BOOL)setScreenTimeEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)enableScreenTimeForDSID:(id)a0 error:(id *)a1;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)performMigrationFromMCXSettings:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (void)isExplicitContentRestricted:(id /* block */)a0;

@end
