@class NSString, MTSXPCServerProxy;

@interface MTSNetworkCredentialManager : NSObject <HMFLogging>

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)threadCredentialManagementEndpoint:(id)a0;
+ (BOOL)threadCredentialManagementImplicitlyEnabledForDeviceType:(id)a0;
+ (BOOL)threadCredentialManagementSupportedForCommissionee:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)retrievePreferredThreadCredentialsOrCreateWithDataset:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithServerProxy:(id)a0;
- (void)retrievePreferredThreadCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)setThreadCredentialManagementEnabled:(BOOL)a0 forPairingWithUUID:(id)a1 completionHandler:(id /* block */)a2;

@end
