@class NSUUID;

@interface HMDAccessoryCounterGroupSpecifier : HMDHouseholdDataEventCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

@end
