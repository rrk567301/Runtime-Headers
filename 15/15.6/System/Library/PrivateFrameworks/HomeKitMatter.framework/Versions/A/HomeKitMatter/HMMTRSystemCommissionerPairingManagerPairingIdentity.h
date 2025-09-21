@class NSUUID, NSNumber, NSString;

@interface HMMTRSystemCommissionerPairingManagerPairingIdentity : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSNumber *vendorID;
@property (readonly, nonatomic) NSNumber *productID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *setupPayload;

- (void).cxx_destruct;
- (char)isEquivalentTo:(id)a0;
- (id)initWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 setupPayload:(id)a4;
- (char)isIdentifiable;

@end
