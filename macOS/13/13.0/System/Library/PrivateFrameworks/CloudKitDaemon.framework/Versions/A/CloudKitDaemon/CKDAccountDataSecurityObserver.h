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
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;
- (BOOL)accountSupportsManatee:(id)a0;

@end
