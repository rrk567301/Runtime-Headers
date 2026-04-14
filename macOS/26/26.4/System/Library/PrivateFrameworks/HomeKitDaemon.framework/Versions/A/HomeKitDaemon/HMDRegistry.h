@class HMDRemoteAccountManager, HMDAccountRegistry, HMDAppleAccountManager;
@protocol HMDIDSServiceManager;

@interface HMDRegistry : NSObject

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) id<HMDIDSServiceManager> idsServiceManager;
@property (nonatomic, readonly) HMDRemoteAccountManager *remoteAccountManager;

+ (id)shared;
+ (id)installGlobalRegistryForDaemon;

- (void).cxx_destruct;
- (id)init;

@end
