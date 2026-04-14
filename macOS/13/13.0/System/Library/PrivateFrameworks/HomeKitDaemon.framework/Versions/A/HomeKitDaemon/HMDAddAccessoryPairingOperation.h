@class NSString;

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;
+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)mainWithError:(id *)a0;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asAdmin:(BOOL)a2 shouldUpdateKeyChainEntry:(BOOL)a3;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asAdmin:(BOOL)a2 shouldUpdateKeyChainEntry:(BOOL)a3 userData:(id)a4;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 newPairingIdentity:(id)a2 homeUUIDWhereAccessoryWasPaired:(id)a3 asAdmin:(BOOL)a4 shouldUpdateKeyChainEntry:(BOOL)a5 userData:(id)a6;
- (void)associateNewControllerKeyWithAccessory:(id)a0 controllerKeyIdentifierToAssociate:(id)a1 permissions:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end
