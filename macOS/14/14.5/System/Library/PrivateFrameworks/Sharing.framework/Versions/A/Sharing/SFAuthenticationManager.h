@class SFAutoUnlockManager, NSString, NSObject;
@protocol OS_dispatch_queue, SFAuthenticationManagerDelegate;

@interface SFAuthenticationManager : NSObject <SFAutoUnlockManagerDelegate, SFUnlockClientProtocol>

@property (readonly, nonatomic) SFAutoUnlockManager *autoUnlockManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SFAuthenticationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)manager:(id)a0 beganAttemptWithDevice:(id)a1;
- (void)manager:(id)a0 failedAttemptWithError:(id)a1;
- (id)authenticateForType:(unsigned long long)a0;
- (void)beganAttemptWithDevice:(id)a0;
- (void)cancelAuthenticationSessionWithID:(id)a0;
- (BOOL)checkDynamicStoreForType:(unsigned long long)a0;
- (void)completedAuthenticationSessionWithID:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (BOOL)declinedToEnableForType:(unsigned long long)a0;
- (id)disableForType:(unsigned long long)a0 device:(id)a1;
- (id)dynamicStorePathForType:(unsigned long long)a0;
- (id)enableForType:(unsigned long long)a0 device:(id)a1 passcode:(id)a2;
- (void)enabledAuthenticationSessionWithID:(id)a0;
- (void)enabledDevice:(id)a0;
- (void)failedAuthenticationSessionWithID:(id)a0 error:(id)a1;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)failedToEnableDeviceForSessionID:(id)a0 error:(id)a1;
- (void)failedUnlockWithError:(id)a0;
- (BOOL)isEnabledForType:(unsigned long long)a0;
- (BOOL)isSupportedForType:(unsigned long long)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)listEligibleDevicesForType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)manager:(id)a0 completedUnlockWithDevice:(id)a1;
- (void)startedAuthenticationSessionWithID:(id)a0;

@end
