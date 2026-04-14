@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;

@end
