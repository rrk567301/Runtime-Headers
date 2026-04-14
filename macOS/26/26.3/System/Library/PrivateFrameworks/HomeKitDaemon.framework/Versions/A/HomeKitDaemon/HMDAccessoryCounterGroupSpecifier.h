@class NSUUID;

@interface HMDAccessoryCounterGroupSpecifier : HMDHouseholdDataEventCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

@end
