@class HMMTRMatterKeypair;

@interface HMMTRFabricV0KeyStore : HMFObject <HMMTRMultiFabricDataStoreQueryKeychainDelegate, HMMTRMultiFabricDataStoreUpdateKeychainDelegate>

@property (readonly, nonatomic) HMMTRMatterKeypair *nocSigner;
@property (readonly, nonatomic) HMMTRMatterKeypair *ownerSharedOperationalKeyPair;

+ (id)logCategory;

- (char)forceUpdateNocSigner:(id)a0 ownerSharedOperationalKeyPair:(id)a1;
- (char)updateNocSigner:(id)a0 ownerSharedOperationalKeyPair:(id)a1;

@end
