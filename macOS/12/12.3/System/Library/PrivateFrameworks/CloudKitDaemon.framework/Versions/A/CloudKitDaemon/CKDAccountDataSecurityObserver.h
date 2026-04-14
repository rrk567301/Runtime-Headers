@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)manateeStatusForCurrentlyLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;

@end
