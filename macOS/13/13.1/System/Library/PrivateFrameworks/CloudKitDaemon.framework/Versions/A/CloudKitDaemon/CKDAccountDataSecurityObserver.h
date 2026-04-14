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
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)handleWalrusStateChanged;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;

@end
