@interface HMDUnassociatedAppleHomePodAccessory : HMDUnassociatedAppleMediaAccessory

- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 requiredPairingCapabilities:(unsigned long long)a4 minimumPairingSoftware:(id)a5 messageDispatcher:(id)a6;

@end
