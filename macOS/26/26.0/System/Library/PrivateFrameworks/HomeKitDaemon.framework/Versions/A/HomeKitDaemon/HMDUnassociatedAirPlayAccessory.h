@class NSString, HMFPairingIdentity;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>

@property (copy) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL supportsAssociation;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)addTransactionForHome:(id)a0;
- (void)associateToHome:(id)a0 completionHandler:(id /* block */)a1;
- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
