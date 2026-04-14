@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentity:(id)a0;
- (id)description;

@end
