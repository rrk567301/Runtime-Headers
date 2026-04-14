@class NSUUID;

@interface HMDAccessoryCounterGroupSpecifier : HMDHouseholdDataEventCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

@end
