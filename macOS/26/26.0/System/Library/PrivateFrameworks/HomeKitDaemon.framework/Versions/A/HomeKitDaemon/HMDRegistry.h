@class HMDAccountRegistry, HMDIDSServiceManager, HMDRemoteAccountManager, HMDAppleAccountManager;

@interface HMDRegistry : NSObject

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) HMDIDSServiceManager *idsServiceManager;
@property (nonatomic, readonly) HMDRemoteAccountManager *remoteAccountManager;

+ (id)shared;
+ (id)installGlobalRegistryForDaemon;

- (id)init;
- (void).cxx_destruct;

@end
