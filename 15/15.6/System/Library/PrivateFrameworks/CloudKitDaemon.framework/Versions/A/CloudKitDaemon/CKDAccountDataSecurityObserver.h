@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForWalrusStatus;
@property (retain, nonatomic) id<NSObject> walrusStatusChangeObserver;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)sharedWalrusController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (void)postClouddWalrusUpdateNotification;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (char)accountSupportsManatee:(id)a0;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)handleWalrusStateChanged;
- (char)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(char)a1 error:(id *)a2;
- (char)isWalrusEnabledForAccount:(id)a0 allowBlockingFetch:(char)a1;
- (char)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(char)a1 allowBlockingFetch:(char)a2 error:(id *)a3;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(char)a1 completionHandler:(id /* block */)a2;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(char)a1 checkCache:(char)a2 allowFetch:(char)a3 completionHandler:(id /* block */)a4;

@end
