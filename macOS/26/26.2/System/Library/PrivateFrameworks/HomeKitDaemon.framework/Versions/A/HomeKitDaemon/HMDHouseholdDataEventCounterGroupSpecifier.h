@class NSUUID;

@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

@end
