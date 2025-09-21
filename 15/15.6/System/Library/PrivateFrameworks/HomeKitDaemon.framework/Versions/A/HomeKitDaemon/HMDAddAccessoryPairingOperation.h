@class NSString;

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (char)addPairingToAirPlayAccessory:(id)a0 newPairingIdentity:(id)a1 isOwner:(char)a2 error:(id *)a3;
- (char)addPairingToHAPAccessory:(id)a0 newPairingIdentity:(id)a1 permissions:(unsigned long long)a2 error:(id *)a3;
- (void)associateNewControllerKeyWithAccessory:(id)a0 controllerKeyIdentifierToAssociate:(id)a1 permissions:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asOwner:(char)a2 asAdmin:(char)a3 shouldUpdateKeyChainEntry:(char)a4;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asOwner:(char)a2 asAdmin:(char)a3 shouldUpdateKeyChainEntry:(char)a4 userData:(id)a5;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 newPairingIdentity:(id)a2 homeUUIDWhereAccessoryWasPaired:(id)a3 asOwner:(char)a4 asAdmin:(char)a5 shouldUpdateKeyChainEntry:(char)a6 userData:(id)a7;
- (char)mainWithError:(id *)a0;

@end
