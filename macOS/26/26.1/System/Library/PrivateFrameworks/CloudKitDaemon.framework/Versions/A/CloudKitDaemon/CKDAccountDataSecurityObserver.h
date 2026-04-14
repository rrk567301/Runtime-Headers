@class CDPContext, CKDLogicalDeviceContext, NSError, NSObject;
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
@property (retain, nonatomic) CDPContext *primaryAccountContext;
@property (copy, nonatomic) id /* block */ walrusStateControllerProvider;
@property (weak) id<CKDAccountDataSecurityObserverDelegate> delegate;

- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)validateCachedDataSecurityRequirementsAndReturnWalrusResultForAccount:(id)a0 isServiceManatee:(BOOL)a1 errorPtr:(id *)a2;
- (void)handleWalrusStateChanged;
- (void)_fetchWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (id)walrusStatusProviderWithContext:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (void)validateDataSecurityStatusesForAccount:(id)a0 isServiceManatee:(BOOL)a1 clientSDKVersionLaterThanSkyStar:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)_fetchAndUpdateWalrusStatusForLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;
- (void)dealloc;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 allowFetch:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_setCachedWalrusStatusForLoggedInAccount:(long long)a0 shouldNotifyIfChanged:(BOOL)a1;
- (BOOL)isWalrusEnabledForAccount:(id)a0 allowFetch:(BOOL)a1;
- (id)stateControllerWithContext:(id)a0;
- (id)initWithDeviceContext:(id)a0 stateControllerProvider:(id /* block */)a1 walrusStateControllerProvider:(id /* block */)a2;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)postClouddWalrusUpdateNotification;
- (void)clearCachedValuesForTesting;
- (long long)_fetchManateeAvailability:(id *)a0;
- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowFetch:(BOOL)a2 error:(id *)a3;

@end
