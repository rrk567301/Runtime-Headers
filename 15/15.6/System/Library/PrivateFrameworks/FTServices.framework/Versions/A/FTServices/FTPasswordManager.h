@class NSString, IMUserNotificationCenter, NSMutableSet, ACAccountStore, _FTPasswordManagerCachedAuthTokenInfo;

@interface FTPasswordManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager> {
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
    IMUserNotificationCenter *_userNotificationCenter;
    _FTPasswordManagerCachedAuthTokenInfo *_cachedAuthTokenInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_loginUserNotificationForService:(id)a0 user:(id)a1 isForBadPassword:(char)a2 showForgetPassword:(char)a3 shouldRememberPassword:(char)a4;

- (id)init;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (id)_credentialForAccount:(id)a0;
- (id)initWithUserNotificationCenter:(id)a0;
- (id)_gameCenterAccountWithUsername:(id)a0;
- (id)_accountBasedOnProfileID:(id)a0 orUsername:(id)a1 inStore:(id)a2;
- (id)_accountOptionsDictForRenewCredentialsForService:(id)a0 username:(id)a1 shouldFailIfNotSilent:(char)a2;
- (id)_accountWithProfileID:(id)a0 username:(id)a1 inStore:(id)a2;
- (id)_accountWithProfileIDMatchingUser:(id)a0 inStore:(id)a1;
- (id)_accountWithUsername:(id)a0 inStore:(id)a1;
- (id)_accountWithUsernameAlias:(id)a0 inStore:(id)a1;
- (id)_findAccountOfType:(id)a0 InStore:(id)a1 withCriteria:(id /* block */)a2;
- (id)_findGameCenterAccountInStore:(id)a0 withCriteria:(id /* block */)a1;
- (id)_findIDSAccountInStore:(id)a0 withCriteria:(id /* block */)a1;
- (id)_findIDSAccountsInStore:(id)a0 withCriteria:(id /* block */)a1;
- (id)_keychainAuthTokenForUsername:(id)a0 service:(id)a1;
- (id)_keychainPasswordForUsername:(id)a0 service:(id)a1;
- (id)_profileIDForUsername:(id)a0 inStore:(id)a1;
- (void)_renewCredentialsIfPossibleForAccount:(id)a0 username:(id)a1 inServiceIdentifier:(id)a2 originalInServiceIdentifier:(id)a3 serviceName:(id)a4 failIfNotSilent:(char)a5 renewHandler:(id /* block */)a6 shortCircuitCompletionBlock:(id /* block */)a7;
- (void)_setKeychainAuthToken:(id)a0 forUsername:(id)a1 service:(id)a2;
- (void)_setKeychainPassword:(id)a0 forUsername:(id)a1 service:(id)a2;
- (char)_shouldForceSilentOnlyAuthForUsername:(id)a0 serviceIdentifier:(id)a1;
- (void)_updateStatus:(id)a0 onAccount:(id)a1;
- (char)_usernameHasCorrespondingIdMSAccount:(id)a0;
- (id)acAccountWithProfileID:(id)a0 username:(id)a1 accountStore:(id)a2;
- (double)authTokenGracePeriod;
- (void)cancelRequestID:(id)a0 serviceIdentifier:(id)a1;
- (void)cleanUpAccountsBasedOnInUseUsernamesBlock:(id /* block */)a0 profileIDBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)cleanUpAccountsWithUsername:(id)a0 orProfileID:(id)a1 basedOnInUseUsernames:(id)a2 profileIDs:(id)a3 completionBlock:(id /* block */)a4;
- (void)fetchAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 outRequestID:(id *)a3 completionBlock:(id /* block */)a4;
- (void)fetchPasswordForProfileID:(id)a0 username:(id)a1 service:(id)a2 outRequestID:(id *)a3 completionBlock:(id /* block */)a4;
- (id)gameCenterPropertiesFromAccountWithUsername:(id)a0;
- (char)isAuthTokenReceiptTime:(double)a0 withinGracePeriod:(double)a1;
- (void)performCleanUpWithCompletion:(id /* block */)a0;
- (id)profileIDForACAccount:(id)a0;
- (void)removeAuthTokenAllowingGracePeriodForProfileID:(id)a0 username:(id)a1;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(char)a3 showForgotPassword:(char)a4 failIfNotSilent:(char)a5 outRequestID:(id *)a6 completionBlock:(id /* block */)a7;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(char)a3 showForgotPassword:(char)a4 forceRenewal:(char)a5 failIfNotSilent:(char)a6 outRequestID:(id *)a7 completionBlock:(id /* block */)a8;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(char)a3 showForgotPassword:(char)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (void)requestPasswordForUsername:(id)a0 service:(id)a1 badPassword:(char)a2 showForgotPassword:(char)a3 shouldRememberPassword:(char)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (void)setAccountStatus:(id)a0 forProfileID:(id)a1 username:(id)a2 service:(id)a3;
- (void)setAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 authToken:(id)a3 selfHandle:(id)a4 accountStatus:(id)a5 outRequestID:(id *)a6 completionBlock:(id /* block */)a7;
- (void)setAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 authToken:(id)a3 selfHandle:(id)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (void)setHandlesForProfileID:(id)a0 username:(id)a1 service:(id)a2 handles:(id)a3;
- (void)setPasswordForProfileID:(id)a0 username:(id)a1 service:(id)a2 password:(id)a3 outRequestID:(id *)a4 completionBlock:(id /* block */)a5;
- (char)supportsAuthTokenRequests;
- (void)updatePreviousUsername:(id)a0 toNewUsername:(id)a1;

@end
