@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithIdentity:(id)a0;
- (void).cxx_destruct;

@end
