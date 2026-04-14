@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)initWithIdentity:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
