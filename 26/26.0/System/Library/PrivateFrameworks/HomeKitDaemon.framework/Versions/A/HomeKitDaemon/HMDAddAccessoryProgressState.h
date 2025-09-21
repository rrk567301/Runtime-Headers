@class NSUUID, NSString, HMAccessoryCategory, MTRCommissioneeInfo;

@interface HMDAddAccessoryProgressState : HMFObject

@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic) unsigned long long certificationStatus;
@property (readonly, nonatomic) NSString *productData;
@property (readonly, nonatomic) MTRCommissioneeInfo *commissioneeInfo;
@property (readonly, nonatomic) NSUUID *systemCommissionerUUID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPairedAccessory:(id)a0;
- (id)initWithUUID:(id)a0 accessoryName:(id)a1 manufacturerName:(id)a2 category:(id)a3 certificationStatus:(unsigned long long)a4 productData:(id)a5 commissioneeInfo:(id)a6 systemCommissionerUUID:(id)a7;
- (id)initWithUnpairedAccessory:(id)a0 server:(id)a1;
- (id)initWithUnpairedAccessory:(id)a0 server:(id)a1 accessoryInfo:(id)a2 certificationStatus:(unsigned long long)a3;
- (id)initWithUnpairedAccessory:(id)a0 server:(id)a1 categoryIdentifier:(id)a2 certificationStatus:(unsigned long long)a3;

@end
