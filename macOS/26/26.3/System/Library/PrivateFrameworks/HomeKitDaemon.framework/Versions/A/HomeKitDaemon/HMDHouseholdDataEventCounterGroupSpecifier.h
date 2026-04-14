@class NSUUID;

@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

@end
