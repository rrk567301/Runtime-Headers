@class NSString;

@interface CalSubscriptionSession : CalSession {
    int _isUpdating;
}

@property (retain) NSString *username;
@property (retain) NSString *password;
@property BOOL tryCredentialsOnNextSync;
@property BOOL needsRefresh;
@property BOOL isAutoRefreshed;

+ (BOOL)shouldForceSSL:(id)a0;
+ (id)urlUsingHTTPS:(id)a0;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)subscription:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)subscriptionDidFinishLoading:(id)a0;
- (void)subscription:(id)a0 didFailWithError:(id)a1;
- (void)synchronizeWithFlags:(long long)a0;
- (void)deletePersistedErrorAndNotify;
- (void)reschedule;
- (double)timeSinceLastSync;
- (BOOL)needsSync;
- (BOOL)persistErrorAndNotify;
- (void)systemNetworkDidChange;
- (void)_doSynchronize;
- (void)onNextSyncTryUsername:(id)a0 andPassword:(id)a1;

@end
