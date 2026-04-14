@class NSError, CDPContext, CKDLogicalDeviceContext;
@protocol CDPWalrusStatusProvider, CKDAccountDataSecurityObserverDelegate, NSObject;

@interface CKDAccountDataSecurityObserver : NSObject

@property (readonly, nonatomic) long long cachedManateeAvailableForLoggedInAccount;
@property (readonly, copy, nonatomic) NSError *cachedCDPErrorForManateeStatus;
@property (readonly, nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (readonly, copy, nonatomic) NSError *cachedCDPErrorForWalrusStatus;
@property (retain, nonatomic) id<NSObject> walrusStatusChangeObserver;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (copy, nonatomic) id /* block */ stateControllerProvider;
@property (readonly, nonatomic) id<CDPWalrusStatusProvider> walrusStateController;
@property (retain, nonatomic) CDPContext *primaryAccountContext;
@property (copy, nonatomic) id /* block */ walrusStateControllerProvider;
@property (weak) id<CKDAccountDataSecurityObserverDelegate> delegate;

- (void)clearCachedValuesForTesting;
- (void)_setCachedWalrusStatusForLoggedInAccount:(long long)a0 CDPErrorForWalrusStatus:(id)a1 shouldNotifyIfChanged:(BOOL)a2;
- (void)_fetchWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (void)_setCachedManateeAvailableForLoggedInAccount:(long long)a0 CDPErrorForManatee:(id)a1 shouldNotifyIfChanged:(BOOL)a2;
- (void)postClouddWalrusUpdateNotification;
- (id)initWithDeviceContext:(id)a0 stateControllerProvider:(id /* block */)a1 walrusStateControllerProvider:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleWalrusStateChanged;
- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;
- (void)_fetchAndUpdateWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 allowFetch:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)walrusStatusProviderWithContext:(id)a0;
- (void)validateDataSecurityStatusesForAccount:(id)a0 isServiceManatee:(BOOL)a1 clientSDKVersionLaterThanSkyStar:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_fetchAndUpdateManateeAvailability;
- (BOOL)isWalrusEnabledForAccount:(id)a0 allowFetch:(BOOL)a1;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)accountSupportsManatee:(id)a0;
- (id)validateCachedDataSecurityRequirementsAndReturnWalrusResultForAccount:(id)a0 isServiceManatee:(BOOL)a1 errorPtr:(id *)a2;
- (id)stateControllerWithContext:(id)a0;
- (id)initWithDeviceContext:(id)a0;

@end
