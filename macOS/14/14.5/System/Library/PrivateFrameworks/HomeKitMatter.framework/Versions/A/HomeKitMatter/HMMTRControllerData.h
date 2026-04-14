@class HMMTRFabric, NSNumber, NSData;

@interface HMMTRControllerData : HMFObject

@property (weak, nonatomic) HMMTRFabric *fabric;
@property (retain, nonatomic) NSNumber *nodeID;
@property (readonly, copy) NSData *operationalCertificate;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)setOperationalCertificate:(id)a0;
- (id)initWithFabric:(id)a0;

@end
