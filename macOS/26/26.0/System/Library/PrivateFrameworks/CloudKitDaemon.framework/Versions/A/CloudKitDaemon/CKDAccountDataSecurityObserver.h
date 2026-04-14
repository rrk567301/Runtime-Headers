@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol NSObject, CKDAccountDataSecurityObserverDelegate, OS_dispatch_queue, CDPWalrusStatusProvider;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForWalrusStatus;
@property (retain, nonatomic) id<NSObject> walrusStatusChangeObserver;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (copy, nonatomic) id /* block */ stateControllerProvider;
@property (readonly, nonatomic) id<CDPWalrusStatusProvider> walrusStateController;
@property (copy, nonatomic) id /* block */ walrusStateControllerProvider;
@property (weak) id<CKDAccountDataSecurityObserverDelegate> delegate;

- (void)_fetchAndUpdateWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (void)_fetchWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithDeviceContext:(id)a0 stateControllerProvider:(id /* block */)a1 walrusStateControllerProvider:(id /* block */)a2;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (BOOL)isWalrusEnabledForAccount:(id)a0 allowFetch:(BOOL)a1;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;
- (void)clearCachedValuesForTesting;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 allowFetch:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithDeviceContext:(id)a0;
- (void)validateDataSecurityStatusesForAccount:(id)a0 isServiceManatee:(BOOL)a1 clientSDKVersionLaterThanSkyStar:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)stateControllerWithContext:(id)a0;
- (long long)_fetchManateeAvailability:(id *)a0;
- (id)validateCachedDataSecurityRequirementsAndReturnWalrusResultForAccount:(id)a0 isServiceManatee:(BOOL)a1 errorPtr:(id *)a2;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (id)walrusStatusProviderWithContext:(id)a0;
- (void)handleWalrusStateChanged;
- (void)postClouddWalrusUpdateNotification;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_setCachedWalrusStatusForLoggedInAccount:(long long)a0 shouldNotifyIfChanged:(BOOL)a1;
- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;

@end
